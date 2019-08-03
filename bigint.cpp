#include "bigint.hpp"

bigint::bigint() {
    for(int i = 0; i < CAPACITY; ++i) {
        digits[i] = 0;
    }
}
bigint::bigint(int num): bigint() {
    int i = 0;
    while (num != 0) {
        digits[i] = num % 10;
        num = num / 10;
        ++i;
    }   //end while loop
}
std::ostream& operator<<(std::ostream& out, bigint& rhs) {
    if(rhs == 0){
        out << "0";
        return out;
    }
    int i = CAPACITY - 1;
    int digitCounter = 0;   //So 80 digits can be printed on a line at max
    bool foundNum = false;
    
    for (; i >= 0; --i) {
        if(foundNum){
            out<<rhs.digits[i];
            digitCounter++;
            
            if(digitCounter == 70){
                out << "\n";
                digitCounter = 0;   //reset the counter
            }
        }
        
        else if(rhs.digits[i] != 0) {
            foundNum = true;
            out<<rhs.digits[i];
            digitCounter++;
        }
        
    }   //end for loop
    
    return out;
    
}
bigint::bigint(const char a[]) {
    for (int i = 0; i < CAPACITY; ++i)
        digits[i] = 0;
    
    int len = 0;
    
    while(a[len] != '\0') {
        ++len;
    }
    int counter = len - 1;
    for (int i = 0; i < len; ++i){
        digits[counter] = a[i] - '0';
        --counter;
    }
    
}
void bigint::debugprint(std::ostream& out) const {
    for(int i = CAPACITY -1; i >= 0; --i) {
        out<< digits[i]<< " | ";
    }
}
bool bigint::operator==(const bigint& rhs) const{
    for(int i = 0; i < CAPACITY; ++i) {
        if(this->digits[i] != rhs.digits[i])
            return false;
    }
    return true;
}
std::istream& operator >>(std::istream& in, bigint& rhs) {
    int i = 0;
    char data, userInput[CAPACITY];
    
    in>> data;
    while(!in.eof() && data != ';') {
        userInput[i] = data;
        in>> data;
        ++i;
    }
    userInput[i] = 0;
    rhs = bigint(userInput);
    
    return in;
}

bigint bigint::operator+(bigint rhs) const {
    int i = 0,
    remainder = 0,
    temp = 0;
    
    while (i < CAPACITY) {
        remainder = rhs.digits[i] + digits[i] + remainder;
        temp = remainder % 10;
        remainder /= 10;
        rhs.digits[i] = temp;
        ++i;
    }
    
    return rhs;
}
int bigint::operator [](int pos) const {
    
    return digits[pos];
}
bigint bigint::times_digit(int num) const {
    int carry = 0, tempAns;
    bigint temp;
    
    for (int i = 0; i < CAPACITY; ++i) {
        tempAns = (num * this->digits[i]) + carry;
        carry = tempAns / 10;
        temp.digits[i] = tempAns % 10;
    }
    
    return temp;
}
bigint bigint::times_10(int x) const {
    bigint temp;
    for (int i = (CAPACITY - 1); i >= 0; --i) {
        temp.digits[i] = digits[i - x];
    }
    
    for (int i = (x - 1); i >= 0; --i) {
        temp.digits[i] = 0;
    }
    return temp;
}
bigint bigint::operator * (const bigint& rhs) const
{
    bigint partial = *this,
    result;
    
    for (int i = 0; i < CAPACITY; ++i, (partial = *this)) {
        partial.times_digit(rhs[i]);
        partial.times_10(i);
        result = result + partial;
    }
    
    return result;
}

#ifndef BIGINT_HPP_
#define BIGINT_HPP_

#include <iostream>

const int CAPACITY = 200;   //global constant

class bigint {
public:
    bigint();
    bigint(int);
    bigint(const char[]);
    void debugprint(std::ostream&) const;
    bool operator==(const bigint&) const;
    friend std::ostream& operator<<(std::ostream&, bigint&);
    bigint operator+(bigint rhs) const;
    int operator [](int pos) const;
    bigint times_digit(int) const;
    bigint times_10(const int) const;
    bigint operator * (const bigint& rhs) const;
    
private:
    int digits[CAPACITY];
    
};

std::istream& operator>>(std::istream&, bigint&);



#endif

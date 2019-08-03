//==============================================================================
// Basics for openning a file for milestone 2 of Project 1.
//
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in("data1-1.txt");    // Define stream for input
    if(!in) {                           // Make sure it opened correctly.
        std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
        exit(1);
    }
    
    //Until end of file
    //Read two bigints
    //Print them out
    //Add them together
    //Print out results
    
    bigint firstNum, secondNum, result;
    while(!in.eof()) {
        in>> firstNum >> secondNum;
        std::cout<<"First Number: "<< firstNum <<std::endl;
        std::cout<<"Second Number: "<< secondNum <<std::endl;
        
        result = firstNum + secondNum;
        
        std::cout<<"Result: " << result <<std::endl;
    }
    
    
    in.close();
    return 0;
}

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"


int main()
{
    std::ifstream in("data1-2.txt");
    if(!in)
    { std::cerr << "Couldn\'t open data1-1.txt, exiting.\n"; exit(1); }
    
    std::cout << "Input 2 numbers: \n";
    
    // Input, add, output
    bigint left, right;
    while (in >> left && in >> right)
    {
        // Output operands
        std::cout << "left:   " <<  left << "\n";
        std::cout << "right:  " << right << "\n";
        
        // Add
        bigint result = left * right;
        
        // Output result
        std::cout << "result: " << result << "\n\n";
    }
    
    // Close file
    in.close();
    
    return 0;
}

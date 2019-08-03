// bigint Test Program
//
// Tests:  subscript, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


int main () {
    
    {
        // Setup
        bigint bi(4);
        
        // Test
        int digit = bi[0];
        
        // Verify
        assert(bi    == 4);
        assert(digit == 4);
    }
    
    
    
    std::cout << "Done testing subscript." << std::endl;
}


// bigint Test Program
//
// Tests:  times_10, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times_10(0);

        // Verify
        assert(bi == 3);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);
        
        // Test
        bi = bi.times_10(1);
        
        // Verify
        assert(bi == 30);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);
        
        // Test
        bi = bi.times_10(2);
        
        // Verify
        assert(bi == 300);
    }
    
    

    std::cout << "Done testing times_10" << std::endl;
}


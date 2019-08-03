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
        bigint bi(1);
        
        // Test
        bi = bi.times_digit(9);
        
        // Verify
        assert(bi == 9);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(11);
        
        // Test
        bi = bi.times_digit(9);
        
        // Verify
        assert(bi == 99);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(123);

        // Test 
        bi = bi.times_digit(9);

        // Verify
        assert(bi == 1107);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(9);
        
        // Test
        bi = bi.times_digit(999);
        
        // Verify
        assert(bi == 8991);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(999999);
        
        // Test
        bi = bi.times_digit(999);
        
        // Verify
        assert(bi == 998999001);
    }

    
    std::cout << "Done testing bigint * digit" << std::endl;

}

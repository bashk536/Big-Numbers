// Bash Khanal
// bigint Test Program
//
// Tests:  int constructor, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
        
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1);
        bigint right(0);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 1);
        //assert(right  == 0);
        assert(result == 1);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(1);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 1);
        assert(result == 1);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1);
        bigint right(1);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 1);
        assert(right  == 1);
        assert(result == 2);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(10);
        bigint right(0);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 10);
        assert(right  == 0);
        assert(result == 10);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(11);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 11);
        assert(result == 11);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(11);
        bigint right(11);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 11);
        assert(right  == 11);
        assert(result == 22);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(10);
        bigint right(111);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 10);
        assert(right  == 111);
        assert(result == 121);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(111);
        bigint right(10);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 111);
        assert(right  == 10);
        assert(result == 121);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1000);
        bigint right(0);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 1000);
        assert(right  == 0);
        assert(result == 1000);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1);
        bigint right(1000);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 1);
        assert(right  == 1000);
        assert(result == 1001);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(11);
        bigint right(1000);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 11);
        assert(right  == 1000);
        assert(result == 1011);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(999999);
        bigint right(1);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 999999);
        assert(right  == 1);
        assert(result == 1000000);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(11111);
        bigint right(999999);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 11111);
        assert(right  == 999999);
        assert(result == 1011110);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("999999999999999999999999999999");
        bigint right("1");
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == "999999999999999999999999999999");
        assert(right  == "1");
        assert(result == "1000000000000000000000000000000");
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("11");
        bigint right("999999999999999999999999999999");
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == "11");
        assert(right  == "999999999999999999999999999999");
        assert(result == "1000000000000000000000000000010");
    }
{
    //------------------------------------------------------
    // Setup fixture
    bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
    bigint right("1");
    bigint result;
    
    // Test
    result = left + right;
    
    // Verify
    assert(left   == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
    assert(right  == "1");
    assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
}
    
    std::cout << "Done with testing addition." << std::endl;
}

// string Test Program
//
// Tests:  int constructor, uses ==
//

#include "string.h"

#include <cassert>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // Setup fixture
    string left(0);
    string right(0);
    string result;

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
    string left(1);
    string right(0);
    string result;

    // Test 
    result = left + right;

    // Verify
    assert(left   == 1);
    assert(right  == 0);
    assert(result == 1);
  }

  {
    //------------------------------------------------------
    // Setup fixture
    string left(0);
    string right(1);
    string result;

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
    string left(123);
    string right(56);
    string result;

    // Test 
    result = left + right;

    // Verify
    assert(left   == 123);
    assert(right  ==  56);
    assert(result == 179);
  }

  {
    //------------------------------------------------------
    // Setup fixture
    string left(65);
    string right(321);
    string result;

    // Test 
    result = left + right;

    // Verify
    assert(left   ==  65);
    assert(right  == 321);
    assert(result == 386);
  }

  {
    //------------------------------------------------------
    // Setup fixture
    string left(9999);
    string right(1);
    string result;

    // Test 
    result = left + right;

    // Verify
    assert(left   ==  9999);
    assert(right  ==     1);
    assert(result == 10000);
  }

  {
    //------------------------------------------------------
    // Setup fixture
    string left(1);
    string right(999999);
    string result;

    // Test 
    result = left + right;

    // Verify
    assert(left   ==       1);
    assert(right  ==  999999);
    assert(result == 1000000);
  }

  {
    //------------------------------------------------------
    // Setup fixture
    string left("2222");
    string right("888888888888888888888888888888888888");
    string result;

    // Test 
    result = left + right;

    // Verify
    assert(left   == "2222");
    assert(right  == "888888888888888888888888888888888888");
    assert(result == "888888888888888888888888888888891110");
  }

  {
    //------------------------------------------------------
    // Setup fixture
    string left("777777777777777777777777777777777777777777777");
    string right("333333");
    string result;

    // Test 
    result = left + right;

    // Verify
    assert(left   == "777777777777777777777777777777777777777777777");
    assert(right  == "333333");
    assert(result == "777777777777777777777777777777777777778111110");
  }

  {
    //------------------------------------------------------
    // Setup fixture
    string left("111111111111111111111111111111111111111111");
    string right("999999999999999999999999999999999999999999");
    string result;

    // Test 
    result = left + right;

    // Verify
    assert(left   == "111111111111111111111111111111111111111111");
    assert(right  == "999999999999999999999999999999999999999999");
    assert(result == "1111111111111111111111111111111111111111110");
  }

}

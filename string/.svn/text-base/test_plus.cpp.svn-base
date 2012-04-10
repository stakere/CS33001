//  String class test program
//
//  Tests: uses +,==
//

#include "string.h"
#include <cassert>

//===========================================================================
int main ()
{
  {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  left;
        string  right;
	string  result;
        
	// TEST
        result = left + right;

        // VERIFY
        assert(left    == "");
        assert(right   == "");
        assert(result  == "");
	}

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  left("a");
        string  right("b");
	string  result;

        // TEST
        result = left + right;

        // VERIFY
        assert(left    == "a");
        assert(right   == "b");
        assert(result  == "ab");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  left("blah");
	string  result;

        // TEST
        result = left + "alright";

        // VERIFY
        assert(left    == "blah");
        assert(result  == "blahalright");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  left("abcz");
        string  right("abcd");
	string  result;

        // TEST
        result = left + right;

        // VERIFY
        assert(left    == "abcz");
        assert(right   == "abcd");
        assert(result  == "abczabcd");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  left("blockofcheese");
        string  right("reallysmelly");
	string  result;

        // TEST
        result = left + right;

        // VERIFY
        assert(left    == "blockofcheese");
        assert(right   == "reallysmelly");
        assert(result  == "blockofcheesereallysmelly");
    }
    // ADD ADDITIONAL TESTS AS NECESSARY
}


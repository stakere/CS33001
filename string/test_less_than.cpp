//  String class test program
//
//  Tests: XXX
//

#include "string.h"
#include <cassert>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  left("");
        string  right("");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == false);
        assert(left   == "");
        assert(right  == "");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  left("a");
        string  right("b");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == "a");
        assert(right  == "b");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  left("b");
        string  right("a");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == false);
        assert(left   == "b");
        assert(right  == "a");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  left("abcz");
        string  right("abcd");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == false);
        assert(left   == "abcz");
        assert(right  == "abcd");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  left("abcd");
        string  right("abcz");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == "abcd");
        assert(right  == "abcz");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  left("rstuv");
        string  right("rst");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == false);
        assert(left   == "rstuv");
        assert(right  == "rst");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  left("rst");
        string  right("rstuv");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == "rst");
        assert(right  == "rstuv");
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
}


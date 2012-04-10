//  String class test program
//
//  Tests: ==
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
        bool result = (left == right);

        // VERIFY
        assert(result == true);
        assert(left   == "");
        assert(right  == "");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  left("a");
        string  right("b");

        // TEST
        bool result = (left == right);

        // VERIFY
        assert(result == false);
        assert(left   == "a");
        assert(right  == "b");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  left("back");
        string  right("a");

        // TEST
        bool result = (left == right);

        // VERIFY
        assert(result == false);
        assert(left   == "back");
        assert(right  == "a");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  left("abcz");
        string  right("abcd");

        // TEST
        bool result = (left == right);

        // VERIFY
        assert(result == false);
        assert(left   == "abcz");
        assert(right  == "abcd");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  left("abcdef");
        string  right("abcdef");

        // TEST
        bool result = (left == right);

        // VERIFY
        assert(result == true);
        assert(left   == "abcdef");
        assert(right  == "abcdef");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  left("rstuv");
        string  right("rst");

        // TEST
        bool result = (left == right);

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
        bool result = (left == right);

        // VERIFY
        assert(result == false);
        assert(left   == "rst");
        assert(right  == "rstuv");
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
}


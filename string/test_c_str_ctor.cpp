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

        // TEST
        string  str("");

        // VERIFY
        assert(str == "");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        string  str("a");

        // VERIFY
        assert(str == "a");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        string  str("abcd");

        // VERIFY
        assert(str == "abcd");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        string  str("123456789012345678901234567890");

        // VERIFY
        assert(str == "123456789012345678901234567890");
    }

}


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
        string  str("a");

        // TEST
        char result = str[0];

        // VERIFY
        assert(str    == "a");
        assert(result == 'a');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("def");

        // TEST
        char result = str[2];

        // VERIFY
        assert(str    == "def");
        assert(result == 'f');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("qrstuv");

        // TEST
        char result = str[4];

        // VERIFY
        assert(str    == "qrstuv");
        assert(result == 'u');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("applestoapples");

        // TEST
        char result = str[12];

        // VERIFY
        assert(str    == "applestoapples");
        assert(result == 'e');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("12ab34cd56ef");

        // TEST
        char result = str[8];

        // VERIFY
        assert(str    == "12ab34cd56ef");
        assert(result == '5');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("abcdefghijklmnop");

        // TEST
        char result = str[13];

        // VERIFY
        assert(str    == "abcdefghijklmnop");
        assert(result == 'n');
    }

    // ADD ADDITIONAL TESTS AS NECESSARY

}


//  String class test program
//
//  Tests: findstring()
//

#include "string.h"
#include <cassert>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("ddddffffggggcvvvv");
	string result;

        // TEST
        result = str.findstring("cv", 0);

        // VERIFY
        assert(str    == "ddddffffggggcvvvv");
        assert(result == 12);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("yaaaaabbbbbxxxxxyes");
	string result;

        // TEST
        result = str.findstring("yes", 5);

        // VERIFY
        assert(str    == "yaaaaabbbbbxxxxxyes");
        assert(result == 16);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("abcdefghijklmnopqrstuvwxyz");
	string result;

        // TEST
        result = str.findstring("klmno", 0);

        // VERIFY
        assert(str    == "abcdefghijklmnopqrstuvwxyz");
        assert(result == 9);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("abcdef123456abcdef123456");
	string result;

        // TEST
        result = str.findstring("1234", 11);

        // VERIFY
        assert(str    == "abcdef123456abcdef123456");
        assert(result == 18);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("americanfootballthewayturnedup");
	string result;

        // TEST
        result = str.findstring("alltheway", 9);

        // VERIFY
        assert(str    == "americanfootballthewayturnedup");
        assert(result == 17);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY

}

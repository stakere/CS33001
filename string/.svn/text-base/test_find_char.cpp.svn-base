//  String class test program
//
//  Tests: findchar()
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
        result = str.findchar('c', 0);

        // VERIFY
        assert(str    == "ddddffffggggcvvvv");
        assert(result == "12");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("yaaaaabbbbbxxxxxy");
	string result;

        // TEST
        result = str.findchar('y', 5);

        // VERIFY
        assert(str    == "yaaaaabbbbbxxxxxy");
        assert(result == 16);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("abcdefghijklmnopqrstuvwxyz");
	string result;

        // TEST
        result = str.findchar('k', 0);

        // VERIFY
        assert(str    == "abcdefghijklmnopqrstuvwxyz");
        assert(result == 10);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("abcdef123456abcdef123456");
	string result;

        // TEST
        result = str.findchar('1', 11);

        // VERIFY
        assert(str    == "abcdef123456abcdef123456");
        assert(result == 18);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("americanfootball");
	string result;

        // TEST
        result = str.findchar('a', 9);

        // VERIFY
        assert(str    == "americanfootball");
        assert(result == 13);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
	string  str("shootingrange");
	string result;

        // TEST
        result = str.findchar('g', 0);

        // VERIFY
      assert(str    == "shootingrange");
      assert(result == 7);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY

}

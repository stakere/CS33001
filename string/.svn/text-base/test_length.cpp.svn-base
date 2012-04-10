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
        string  str("");

        // TEST
        int result = str.length();
std::cout << "1 len = " << result << "\n";
std::cout << "1 str = \"" << str << "\"\n";

        // VERIFY
        assert(str    == "");
        assert(result == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("a");

        // TEST
        int result = str.length();
std::cout << "2 len = " << result << "\n";
std::cout << "2 str = \"" << str << "\"\n";

        // VERIFY
        assert(str    == "a");
        assert(result == 1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("abcdefghijklmnopqrstuvwxyz");

        // TEST
        int result = str.length();
std::cout << "3 len = " << result << "\n";
std::cout << "3 str = \"" << str << "\"\n";

        // VERIFY
        //                12345678901234567890123456
        assert(str    == "abcdefghijklmnopqrstuvwxyz");
        assert(result == 26);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("abcdef123456abcdef123456");

        // TEST
        int result = str.length();

        // VERIFY
        assert(str    == "abcdef123456abcdef123456");
        assert(result == 24);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("americanfootball");

        // TEST
        int result = str.length();

        // VERIFY
        assert(str    == "americanfootball");
        assert(result == 16);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
		string  str("shootingrange");

        // TEST
        int result = str.length();

        // VERIFY
      assert(str    == "shootingrange");
      assert(result == 13);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY

}

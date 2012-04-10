//  String class test program
//
//  Tests: sub, sub
//

#include "string.h"
#include <cassert>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("abcdefghi");
	string result;

        // TEST
        result = str.sub(0);

        // VERIFY
        assert(str    == "abcdefghi");
        assert(result == "abcdefghi");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("definately");
	string result;

        // TEST
        result = str.sub(0, 2);

        // VERIFY
        assert(str    == "definately");
        assert(result == "def");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("qrstuv");
	string result;

        // TEST
        result = str.sub(2, 4);

        // VERIFY
        assert(str    == "qrstuv");
        assert(result == "stu");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("applestoapples");
	string result;

        // TEST
        result = str.sub(5);

        // VERIFY
        assert(str    == "applestoapples");
        assert(result == "appletoapple");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        string  str("12ab34cd56ef");
	string result;

        // TEST
        result = str.sub(1, 12);

        // VERIFY
        assert(str    == "12ab34cd56ef");
        assert(result == "2ab34cd56ef");
    }

    // ADD ADDITIONAL TESTS AS NECESSARY

}


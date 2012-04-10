//  String class test program
//

//  Tests: int//
#include <cassert>
#include "stack.h"

int main()
{
	{
		 stack<int> string1;
		 int i = 2, j=0;

		 string1.push(i);
		 j = string1.pop();

		 assert(j==2);

	}


}

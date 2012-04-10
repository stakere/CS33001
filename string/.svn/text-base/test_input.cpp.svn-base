// string input from file, add, test 
//
//==============================================================================
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "string.h"
#include <cassert>
//==============================================================================
int main()
{
  {
    string left("aaaaaaaaa");
    string right("bbbbbbbbb");
    string left2;
    string right2;
    string three;
    string result;
    std::ifstream in("text1.txt");
    if(!in)
      {
	std::cerr << "Couldn't open text1.txt, exiting.\n";
	exit(1);
      }
    while(in >> left2 && in >> right2)
      {
	std::cout << "left2:   " <<  left2  << "\n";
	std::cout << "right2:  " <<  right2 << "\n";
    
	result = left2 + right2;
    
	std::cout << "result: " << result << "\n\n";
      }

    in.close();

    
    assert(three == "");
    assert(left == "aaaaaaaaa");
    assert(right == "bbbbbbbbb");
    assert(left2 == "aaaaaaaaaaaaaaaaaaaaaaaabbbbbbbb");
    assert(right2 == "xxxxxxxxxxxxxxxxxx");
    assert(result == "aaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbxxxxxxxxxxxxxxxxxx");
  }

}


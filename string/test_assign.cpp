#include <iostream>
#include <cassert>
#include "string.h"
#ifndef CS33001_TEST_ASSIGN_CPP_
#define CS33001_TEST_ASSIGN_CPP_

int main()
{
  {
    string str1("A");

    string result = str1;

    assert(str1=='A');
    assert(result=='A');
  }
}
#endif

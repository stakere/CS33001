#include <iostream>
#include <cassert>
#include "string.h"
#ifndef CS33001_TEST_SWAP_CPP_
#define CS33001_TEST_SWAP_CPP_

int main()
{
  {
    string str1("2222"), str2("BBBB");

    str1.swap(str2);

    assert(str1=="BBBB");
    assert(str2=="2222");
  }
}
#endif

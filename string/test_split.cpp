#include<iostream>
#include<cassert>
#include<vector>
#include"string.h"
#ifndef CS33001_TEST_SPLIT_CPP_
#define CS33001_TEST_SPLIT_CPP_

int main()
{
  {
    string str1("1111 BBBB 3333 DDDD 5555");

    std::vector<string> vector = str1.split(' ');


    assert(str1=="1111 BBBB 3333 DDDD 5555");
    assert(vector.size() == 5);
    assert(vector[0]=="1111"); 
    assert(vector[1]=="BBBB");
    assert(vector[2]=="3333");
    assert(vector[3]=="DDDD");
    assert(vector[4]=="5555");

  }
}
#endif

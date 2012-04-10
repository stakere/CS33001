#include <cassert>
#include"../string/string.h"
#include"stack.h"

int main()
{
  {
    stack<string> test;

    assert(test.IsEmpty());
  }

  {
    stack<string> st1;
    string test("d"), result;

    st1.push(test);

    assert(st1.pop()=="d");
  }

  {
    stack<string> test;
    string str1(" ");

    test.push(str1);

    assert(test.pop()==" ");
  }
}
           

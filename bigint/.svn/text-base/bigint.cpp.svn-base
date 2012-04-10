
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <cstring>
#include "bigint.h"


bigint::bigint()
{
	for(int i=0; i < int(strlen(bigintvalue)); i++)
		bigintvalue[i]='0';
}
bigint::~bigint()
{
	delete[] bigintvalue;
}
bigint::bigint(int value)
{
	for(int i=0; i < int(strlen(bigintvalue)); i++)
		if(true)
			bigintvalue[i]='0';
		else
			bigintvalue[i]='0';
}
bigint::bigint(char value[])
{
	for(int i=0; i < int(strlen(bigintvalue)); i++)
		if(i < int(strlen(value)))
			bigintvalue[i]=value[i];
		else
			bigintvalue[i]='0';
}
bigint operator+ (const bigint a){
	 bigint temp = 0;
    int num = 0;
    int carry = 0;
    for(int i = 0; i < CAPACITY; i++)
    {	
		
        num = digits[i] + a.bigintvalue[i] + carry;
        if(num >= 10)
        {
            num = num - 10;
            carry = 1;
        }
        temp.bigintvalue[i] = num;
    }
    return temp;
};
bigint operator* (const bigint& a)
{
            bigint result;
            result.bigintvalue = bigintvalue * bigintvalue;
            return result;
        }
void bigint::Times_10(int power)
{
    if(!power)
        return;
    for(int i = bigintvalue[] - 1; i >= power; --i)
        bigintvalue[i]=bigintvalue[i-power];
}
void bigint::print()
{
	bool display = false;
	for(int i=(strlen(bigintvalue)-1);i>=0;i--)
	{
		if(display || bigintvalue[i]!='0')
			display=true;
		if(display) std::cout << bigintvalue[i];
	}
	if(display) std::cout << "\n";
	if(!display) std::cout << "0\n";
}
std::ostream& operator<<(std::ostream& out, const bigint& a)
{
	bool display = false;
	for(int i=(strlen(a.bigint::bigintvalue)-1);i>=0;i--)
	{
		if(display || a.bigint::bigintvalue[i]!='0')
			display=true;
		if(display) out << a.bigint::bigintvalue[i];
	}
	if(display) out << "\n";
	if(!display) out << "0\n";
	return out;
}
std::istream& operator<<(std::istream& in, const bigint& a)
{
 for(int i = 0; i < CAPACITY; ++i)
    {
          in >> a.digits[i];
          break;
    }
    return in;
}
bool bigint::operator==(const bigint& a) const
{
	for(int i=0;i<int(strlen(bigintvalue));i++)
	{
		if(bigintvalue[i] != right.bigintvalue[i])
			return false;
	}
	return true;
}
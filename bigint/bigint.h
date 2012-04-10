#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <cstring>
const int CAPACITY = 100;
class bigint
{
public:
	bigint(void);
	~bigint(void);
	bigint(int);
	bigint(char[]);
	friend bigint operator+ (const bigint a);
	friend bigint operator *(const bigint& a);
	void Times_10(int power);
	void print(void);
    int digits[CAPACITY];
	bool operator==(const bigint& right) const;
	friend std::ostream& operator<<(std::ostream& out, const bigint& a);
	friend std::istream& operator>>(std::istream& in, const bigint& a);
private:
	char bigintvalue[100];
};
	





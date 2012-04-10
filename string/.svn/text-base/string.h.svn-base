#ifndef _STRING_H_
#define _STRING_H_
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
//initialize variable const
const int DEFAULT_SIZE = 128;
//class
class string
{
public:
        //default constructor
        string();
        //initializes string to a single character passed in
        string(const char);
        //copy constructor
        string(const string& box);
		//empty string with set size
		string(int);
        //equality operator
        string& operator=(const string& rhs);
        ////assignment pointer operator 
        //string& operator=(string rhs);
        //subscript operator consistent
        char operator[](int k)const;
        //subscript operator 
        char& operator[](int k);
        //destructor
        ~string();
        //subscript operator
        string(const char[]);
        //concatenation operator 1
        string operator+(const string&)const;
        //concatenation operator 2
        string operator+(const char[])const;
		//concatenation operator 3
		string operator+(const char)const;
        //concatenation operator 4
        string operator+=(const string& rhs);
		//concatenation operator 5
		friend string operator+(const char, const string&);
		//concatenation operator 6
		friend string operator+(const char[], const string&);
        //less than operators
        bool operator<(const string& rhs);
		bool operator<(const char[]);
        //greater than operators
        bool operator>(const string& rhs);
		bool operator>(const char[]);
        //less than or equal operators
        bool operator<=(const string& rhs);
		bool operator<=(const char[]);
        //greater than or equal operators
        bool operator>=(const string& rhs);
		bool operator>=(const char[]);
        //equality operator, compares to see if two strings are equal
        bool operator==(const string& right) const;
		//compares to if a string and a c-string are equal
		bool operator==(const char* right)const; 
        //does not equal operator
        bool operator!=(const string& a) const;
		//!= # 2 operator
		bool operator!=(const char*)const;
        //output operator
        friend std::ostream& operator<<(std::ostream& out, string& a);
        //input operator
        friend std::istream& operator>>(std::istream& in, string& a);
        //copy function
        void copy(const string& ypoc);
        //length method
        bool length()const;
        //find character method
        int findchar(char blah, int a)const;
        //find string method
        int findstring(const string& blah, int a)const;
        //substring method 1
        string sub(const int)const;
        //substring method 2
        string sub(const int a, const int b);
        //reallocate function
        void reallo(int);
        //constant times swap
        void swap(string& rhs);
        //split function
        std::vector<string> split(const char n)const;
		//get the line function
		string get(std::istream& in, const char blah);
private:
        //private variables
        char *stringvalue;
        //char *stringvalue2;
        int CAP; 
};
#endif

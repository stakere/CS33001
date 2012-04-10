#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
#include "string.h"


string::string(){
        
		//initialize string
        stringvalue=new char[DEFAULT_SIZE];
       
		//initialize size
        CAP=DEFAULT_SIZE;
       
		//place a null char
        stringvalue[0] = 0;
       
        //end of default constructor
}

string::string(const char b){
	
	stringvalue = new char[CAP];
	stringvalue[0] = b;
	stringvalue[1] = '\n';

	/*
		//clean up memory
        delete[]stringvalue;
        
		//initializes string to a single character passed in
        stringvalue[0] = b;

		//copy the string
        copy(b);
        
		//end of constructor
		*/
}

string::string(int i){
	stringvalue = new char[CAP];
	CAP = i;
	stringvalue[0] = '\0';
}

string::string(const string& box){

		//clean up memory
        delete[]stringvalue;
        
		//initialize string
        stringvalue=new char[box.CAP];
        
		//initialize size
        CAP = box.CAP;
        
		//copy string
        copy(box);
        
		//end of constructor
}

string::string(const char value[])
{
        // Get memory, init capacity
        stringvalue=new char[DEFAULT_SIZE];
        CAP=DEFAULT_SIZE;
		// Copy from parameter
        int i;for(i=0; value[i] != 0; i++){
                stringvalue[i]=value[i];++i;
}// Null terminate string
        stringvalue[i]='0';
}

string& string::operator=(const string &rhs){
        
		//clean up memory
        delete[]stringvalue;
		
		//initialize string
        stringvalue=new char[rhs.CAP];
        
		//initialize size
        CAP=rhs.CAP;
        
		//copy
        copy(rhs);
        
		//return value
        return *this;
        
		//end of constructor
}

char string::operator[](int k)const{
        //return stored value
        return stringvalue[k];
}

char& string::operator[](int k){
        //return stored value
        return stringvalue[k];
}

string string::operator+(const string& rhs)const{
        //create a string
        string result;
        //loop 'til end of current string
        for(int i=0;i<length();i++)
        //copy for this string into result
        result[i]=stringvalue[i];
        //loop 'til end of either string
        for(int i=length();i<length()+rhs.length();i++)
                //copy from rhs to result
                result[i]=rhs[i-length()];
        //return new value
        return result;
        //end of + operator
}

string string::operator+(const char value[])const{
        //create a string
        string result;
        //loop 'til end of current string
        for(int i=0;i<length();i++)
        //copy for this string into result
        result[i]=stringvalue[i];
        //loop 'til end of either string
        for(int i=length();i<length();i++)
                //copy from rhs to result
                result[i]=value[i-length()];
        //return new value
        return result;
        //end of + operator
}

string string::operator+(const char blah)const{
		//
		string bing(blah);
		//
		return(*this + bing);
		//
}

string string::operator+=(const string& rhs){
        //incremently add
        *this = rhs + *this;
        //return new value
        return *this;
        //end of += operator
}

string operator+(const char blah, const string& open){
		//
		string bing(blah);
		//
		return(bing + open);
		//
}

string operator+(const char blah[], const string& open){
		//
		string bing(blah);
		//
		return(bing + open);
		//
}

bool string::operator<(const string& rhs){
        //int. variables
        bool lt = false;
        int i = 0;
        //check for end of string
        while((stringvalue[i]!=0)&&(rhs.stringvalue[i]!=0)){
                //check if string is larger
                if(stringvalue[i]>rhs.stringvalue[i]) 
                        return false;
                //check if string is smaller
                if(stringvalue[i]<rhs.stringvalue[i]) 
                        lt = true;
                //increment
                ++i;
        }
        //check last character and length
                //check for null char in both strings
                if(stringvalue[i]==0)
                        return true;
                if(lt&&(rhs.stringvalue[i]=0))
                        return true;
                //check for null in both at the same time
                if(lt&&(stringvalue[i]==0)&&(rhs.stringvalue[i]==0))
                        return true;
                if(!lt&&(rhs.stringvalue[i]==0)&&(stringvalue[i]==0))
                        return false;
                return false;
}

bool string::operator<(const char blah[]){
        //
		string bing(blah);
		//
		return (*this<blah);
		//
}

bool string::operator>(const string& rhs)
{
        //intitialize variable
        int i = 0; 
        //use less than operator to compare
    if(stringvalue[i]<rhs.stringvalue[i])
                //if less than
                return false;
        else 
                //if greater than
                return true;
        //end of operator
}

bool string::operator>(const char blah[]){
		//
		string bing(blah);
		//
		return(*this>bing);
		//
}

bool string::operator<=(const string& rhs)
{
        //initialize variable
        int i = 0;
        //use less than and equal to operators to compare
        if(stringvalue[i]<rhs.stringvalue[i] && stringvalue[i]==rhs.stringvalue[i])
                //if less than or equal to
                return true;
        else 
                //if not
                return false;
        //end of operator
}

bool string::operator<=(const char blah[]){
		//
		string bing(blah);
		//
		return(*this<bing || *this==bing);
		//
}

bool string::operator>=(const string& rhs)
{
        //initialize variable
        int i = 0;
        //use less than operator to compare
        if(stringvalue[i]<rhs.stringvalue[i])
                //if less than
                return false;
        else
                //if not
                return true;
        //end of operator
}

bool string::operator>=(const char blah[]){
		//
		string bing(blah);
		//
		return (*this>blah || *this==blah);
		//
}

std::ostream& operator<<(std::ostream& out, string& a){
        //initialize variable
        int i=0;
        //while string is not at the end
		while (a.string::stringvalue[i]!=0){
                //add char to string
			out<<a.string::stringvalue[i];
                //repeat
                ++i;}
        //display the new string
        return out;
        //end of operator
}

std::istream& operator>>(std::istream& in, string& a){
        //initialize variable
        char TEMP[DEFAULT_SIZE];
        //grab variables
        in.get(TEMP, DEFAULT_SIZE);
        //assign
		a = string(TEMP);
		//return
        return in;
        //end of operator
}

bool string::operator==(const string& a) const{
        //initialize variables
        int i = 0;
        //while not a null char
        while (stringvalue[i] != '\0')
        {
                //if not equal
                if(stringvalue[i] != a.stringvalue[i])
                        ++i;
				//display it
                        return false;
        }
        //if equal to zero
        if (a.stringvalue[i] == 0)
                //display true
                return true;
        //if not
        else
                //display false
                return false;
        //end of operator
}

bool string::operator==(const char right[])const{
	string poop(right);
	return(*this == poop);
}

bool string::operator!=(const string& a) const
{
        //while not at the end of the string
        for(int i=0;i<int(stringvalue);i++)
        {
                //check each char and if all are equal
                if(stringvalue[i] == a.stringvalue[i])
                        ++i;
					//if equal
                        return false;
        }
        //if not equal
        return true;
        //end of operator
}

bool string::operator!=(const char a[])const{
	string poop(a);
	//while not at the end of the string
        for(int i=0;i<int(stringvalue);i++)
        {
                //check each char and if all are equal
                if(stringvalue[i] == poop.stringvalue[i])
                        ++i;
					//if equal
                        return false;
        }
        //if not equal
        return true;
        //end of operator
}

string::~string(){ 
        //clean up memory
        delete [] stringvalue;
}

void string::copy(const string& ypoc){
        //initialize variable and copy from parameter
        int i;
        //while not a null char
        for(i=0; ypoc[i] != '\0'; i++){
                //copy to new string
                stringvalue[i]=ypoc.stringvalue[i];
        }
        // Null terminate string
        stringvalue[i]='\0'; 
        //end of method
}

bool string::length()const{
        //scan for null-terminator
        char something=stringvalue[0];
        int i=0;
        //initialized variables, then check for null
        while(something!='\0')
        {
                //keep adding to int 'til end of string
                i++;
                something=stringvalue[i];
        }
        //return its index
        return i;
        //end of method
}

int string::findchar(char blah, int a)const{
        //starts searching for a char at [0] or at [a] if [a] is present
        for(int i=a;i<length();i++)
        {
                //if char is found
                if (stringvalue[i]==blah)
                        //return an index of a char
                        return i;
        }
        //return false if no char found
        return false;
        //end of method
}

int string::findstring(const string& blah, int a)const{
        int size=0;
        //finds length of string
        int num=blah[0];
        //while not null
        while(num!='\0')
        {
                //add to size
                size++;
                num=blah[size];
        }
        //keep checking 'til end of of string
        for(int i=a;i<length();i++)
        {
                //if the first char is present
                if(stringvalue[i]==blah[0])
                {
                        //initialize variables
                        bool ALL=false;
                        int w=i+1;
                        //while all char not found
                        while(!ALL)
                        {
                                //if the next char matches the next char in blah
                                if(stringvalue[i+1]==blah[w])
                                {
                                        //next letter
                                        w++;
                                        //if blah ends
                                        if((i+w)>=length())
                                                //return something
                                                return false;
                                        //if all the char were found
                                        if(w==size)
                                                //return index
                                                return i;
                                }
                                else
                                        //all char found
                                        ALL=true;
                        }
                }
        }
        //if not found
        return false;
        //end of method
}

string string::sub(const int a)const{
        //if not zero
                if(&string::length!=0)
        {
                //add lengths
                string result(a+CAP);
                //if too long to fit
                if((a+CAP)>length())
                        //throw error
                        std::cout<<"ERROR";
                //as long as it's less than addition
                for(int i=a;i<a+CAP;i++)
                        //add to new string
                        result[i]=stringvalue[i];
                //catch new string
                return result;
        }
        //if not
        else
        {
                //subtract a
                string result(length()-a);
                //as long as it fits
                for(int i=a;i<length();i++)
                        //add to new string
                        result[i]=stringvalue[i];
                //display new string
                return result;
        }
                //end of method
}

string string::sub(const int a, const int b){
        //if not zero
        if(&string::length!=0)
        {
                //add lengths
                string result(a+b);
                //if too long to fit
                if((a+b)>length())
                        //throw error
                        std::cout<<"ERROR";
                //as long as it's less than addition
                for(int i=a;i<a+b;i++)
                        //add to new string
                        result[i]=stringvalue[i];
                //catch new string
                return result;
        }
        //if not
        else
        {
                //subtract a
                string result(length()-a);
                //as long as it fits
                for(int i=a;i<length();i++)
                        //add to new string
                        result[i]=stringvalue[i];
                //display new string
                return result;
        }
        //end of method
}

void string::reallo(int newsize){
        //initialize variables
        char *star=new char[newsize];
        int sizing=CAP;
        //if the new size is less than the old size
        if(newsize<CAP){
                //change to new size
                sizing=newsize;
        }
        //initialize variable
        int i;
        //as long as we're not at the end of the new array
        for(i=0;i<sizing;++i)
        {
                //copy from the old array
                star[i]=stringvalue[i];
        }
        //free memory
        delete[] stringvalue;
        //change assignment
        stringvalue=star;
        //assign size
        CAP=newsize;
        //end of method
}

void string::swap(string& rhs){
		//
        char *blah=stringvalue;
		//
		stringvalue=rhs.stringvalue;
        //
		rhs.stringvalue=blah;
        //
		int blahsize;
        //
		blahsize=CAP;
        //
		CAP=rhs.CAP;
        //
		rhs.CAP=blahsize;
		//
}

std::vector<string> string::split(const char n)const{
   //
	std::vector<string> vector;
	//
	string result;
	//
	int i = 0;int j = 0;	
	//
	while(stringvalue[j] != '\0')
	{
		//
		if(stringvalue[j] == n)
		{
			//
			result.stringvalue[i] = '\0';
			//
			result.CAP = i;
			//
			vector.push_back(result);
			//
			i = 0;++j;
			//
			result.stringvalue[i] = stringvalue[j];
			//
			++j;++i;}else{
			//
			result.stringvalue[i] = stringvalue[j];
			//
			++j;++i;}
	}
	//
	result.stringvalue[i] = '\0';
	//
	result.CAP = i;
	//
	vector.push_back(result);
	//
	return vector;
	//
}

string string::get(std::istream& in, const char blah){
	//
	char ming;int i;i = 0;
	//
	in.get(ming);
	//
	while(ming != blah && !in.eof()){
		//
		stringvalue[i] = ming;
		//
		in.get(ming);++i;
	}//
	CAP = i;
	//
	stringvalue[CAP] = '\0';
	//
	return *this;
	//
}
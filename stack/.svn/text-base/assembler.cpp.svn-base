#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include "../string/string.h"
#include "stack.h"
//--------------------------------------------------------------//
//declarations

string in2post(std::vector<string>& infix);

void out_exit(char cmd[]);

string in_to_post(std::vector<string>& infix);

Stack<string> post2ass(std::vector<string>& p);

void outass(std::ostream& out, Stack<string>& assembler);

//--------------------------------------------------------------//
//assembly coding

int main(int argc, char *argv[])
{
  
    if(argc < 2)
    out_exit(argv[0]);

  std::ifstream in(argv[1]);
  if(!in){
    std::cerr << "Couldn't open: " << argv[1] << std::endl;
    exit(2);
  }

  string temp, infix;

  if(argc==3){
    std::ofstream out(argv[2]);
    if(!out){
      std::cerr << "Couldn't open: " << argv[2] << std::endl;
      exit(2);
    }
    while(in>>temp){

      out << "Infix: " << temp << std::endl;

      infix = temp.substr(0, temp.length()-2);

      std::vector<string> vector = infix.split(' ');

      string postfix = in2post(vector);

      out << "postfix: " << postfix << std::endl;
      std::vector<string> vector2 = postfix.split(' ');
      out << "Assembler:" << std::endl;
      stack<string> assembler = post2ass(vector2);
      outass(out, assembler);
    }
  }else{

    while(in>>temp){

      std::cout << "Infix: " << temp << std::endl;

      infix = temp.substr(0, temp.length()-2);

      std::vector<string> vector = infix.split(' ');

      string postfix = in2post(vector);

      std::cout << "Postfix: " << postfix << std::endl;

      std::vector<string> vector2 = postfix.split(' ');

      std::cout << "Assembler: " << std::endl;

      stack<string> assembler = post2ass(vector2);
      outass(std::cout, assembler);
    }
  }
  return 0;
}


//------------------------------------------------------------//
//definitions

string in2post(std::vector<string>& infix){
  stack<string> q;
  int i = 0;
  int j = infix.size();
  string rhs, lhs, wow;

  while(i<j){
    if(infix[i]!='('){
      if(infix[i]==')'){
	rhs = q.pop();
	wow  = q.pop();
	lhs = q.pop();

	q.push(lhs+" "+rhs+" "+wow);
      }else{
	q.push(infix[i]);
      }
    }
    ++i;
  }
  return q.pop();
}


stack<string> post2ass(std::vector<string>& blah){
  stack<string> z, a, bing;

  int i = 0, j = blah.size();
  string rhs, lhs, wow;

  while(i<j){
    if((p[i]=='*') || (p[i]=='+') || (p[i]== '-') || (p[i]== '/')){

      rhs = z.pop();
      lhs = z.pop();
      if(p[i]=='*')
	wow = "ML";
      if(p[i]=='/')
        wow = "DV";
      if(p[i]=='+')
	wow = "AD";
      if(p[i]=='-')
	wow = "SB";

      if(lhs[0]!='T' && lhs[1]!='M' && lhs[2]!='P'){

	bing.push("LD");
	bing.push(lhs);
	bing.push(wow);
	bing.push(rhs);
	bing.push("ST");
	bing.push("TMP");
	z.push("TMP");

      }else{
	bing.push("LD");
	bing.push(rhs);
	bing.push(wow);
	bing.push(lhs);
	bing.push("ST");
	bing.push("TMP");
	z.push("TMP");
      }

    }else{
      z.push(p[i]);
    }
    ++i;

  }

  while(!as.IsEmpty()){
    string operand, wow2;
    operand = bing.pop();
    wow2 = bing.pop();
    a.push(wow2);
    a.push(operand);
  }
  return a;
}

void outass(std::ostream& out, stack<string>& assembler){

  while(!assembler.IsEmpty()){
    out <<"    " << assembler.pop() << "    " << assembler.pop() << std::endl; 
  }
}


void out_exit(char cmd[]){
  std::cerr << "Usage: " << std::endl;
  std::cerr << cmd << " input_file  " << "[output_file]" <<std::endl;

  exit (1);
}

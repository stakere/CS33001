
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
#include "stack.h"
#include "string.h"
#include <iomanip>
#include <cmath>
#include "blah.h"
// function prototypes
int precedence(char symbol);
 
int main()
{
        Stack<char> theStack(100);
	string::string aLine, postfixExpression;
        int i = 0;
        std::ifstream infixFile("infix.txt");
        infixFile >> aLine;                             // priming read
        while(!infixFile.eof())
                int length = aLine.length();
                postfixExpression = "";
 
                for(i = 0; i < length; i++)
                {
                        char lineChar = aLine[i];
                        //IF symbol is an operand (variable) append it to postfixExpression
                        if (lineChar == 'A' || lineChar == 'B' || lineChar == 'C' || lineChar == 'D' || lineChar == 'E')
                        postfixExpression += lineChar;
 
                        //IF symbol is an operator ( + , -  , * , / ) determine to push or pop
                        else if(lineChar == '+' || lineChar == '-' || lineChar == '*' || lineChar == '/')
                        {
                                while(theStack.getTop() != '(' && precedence(theStack.getTop()) >= precedence(lineChar) && !theStack.IsEmpty())
                                {
                                        postfixExpression += theStack.pop();             // pop if top is greater than current
                                }
                                theStack.push(lineChar);                                                // push if current is greater than top
                        }
 
                        // IF symbol is ( push to stack
                        else if(lineChar == '(')
                                theStack.push(lineChar);
 
                        // IF symbol is ) determine to pop and put into expression or discard the parenthesis
                        else if(lineChar == ')')
                        {
                                while(theStack.getTop() != '(')
                                {
                                        postfixExpression += theStack.pop();             // put operators into expression
                                }
                                theStack.pop();                                                                 // pop ( from stack and discard
                        }
                }
                while(!theStack.IsEmpty())
                {
                        postfixExpression += theStack.pop();                             // pop reamining symbols from stack
                }
                std::cout << postfixExpression << std::endl;                                               // display result
                infixFile >> aLine;                                                                             // continuation read
               
        }
        system("pause");
        return 0;
}
 
// This function determines the precedence of the symbol
int precedence(char symbol)
{
        if(symbol == '+' || symbol == '-')
                return 1;
        else if(symbol == '*' || symbol == '/')
                return 2;
        else
                return -1;
}

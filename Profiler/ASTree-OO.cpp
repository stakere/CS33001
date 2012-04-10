/*
 *  ASTree.hpp
 *  Abstract Syntax Tree
 *
 *  Created by Jonathan Maletic on 11/8/11.
 *  Copyright 2011 Kent State University. All rights reserved.
 *
 *  Modified by:
 *
 */

#include "ASTree-OO.hpp"


/////////////////////////////////////////////////////////////////////
// Destructor for srcML
//
srcML::~srcML() {
    
    //Need to Implement.
    
}


/////////////////////////////////////////////////////////////////////
// Copy constructor for srcML
//
srcML::srcML(const srcML& actual) {
    
    //Need to Implement.
    
}

/////////////////////////////////////////////////////////////////////
// Constant time swap for srcML
//
void srcML::swap(srcML& b) {
    
    //Need to Implement.
    
}

/////////////////////////////////////////////////////////////////////
// Assignment for srcML
//
srcML& srcML::operator=(srcML rhs) {
    
    //Need to Implement.
    
    return *this;
}


/////////////////////////////////////////////////////////////////////
// srcML Input
//
std::istream& operator>>(std::istream& in, srcML& src){
    char ch;
    if (!in.eof()) in >> ch;
    src.header = readUntil(in, '>');
    if (!in.eof()) in >> ch;
    src.tree = new category(readUntil(in,'>'));
    src.tree->read(in);
    return in;
}

/////////////////////////////////////////////////////////////////////
// srcML Output
//
std::ostream& operator<<(std::ostream& out, const srcML& src){
    if (TAGS) out << "<" << src.header << ">" << std::endl;
    src.tree->print(out);
    return out;
}






/////////////////////////////////////////////////////////////////////
// Destructor for ASTree::category
//
category::~category(){

    //Need to Implement.

}

/////////////////////////////////////////////////////////////////////
// Copy constructor for ASTree::category
//
category::category(const category& actual){
    
    //Need to Implement.
    
}


/////////////////////////////////////////////////////////////////////
// Constant time swap for ASTree::category
//
void category::swap(category& b){
    
    //Need to Implement.
    
}


/////////////////////////////////////////////////////////////////////
// Assingment for ASTree::category
//
category& category::operator=(category rhs){
    
    //Need to Implement.
    
    return *this;
}


/////////////////////////////////////////////////////////////////////
// Input for ASTree::category
// REQUIRES: '>' was previous charater read
//           && this == new category("TagName") 
//
std::istream& category::read(std::istream& in) {
    ASTree *subtree;
    std::string temp;
    char ch;
    if (!in.eof()) in.get(ch);
    while (!in.eof()) {
        if (ch == '<') {       //Found a tag
            temp = readUntil(in, '>');
            if (temp[0] == '/') {
                closeTag = temp;
                break;           //Found close tag, stop recursion.
            }
            subtree = new category(temp);  //Create a category node.
            subtree->read(in);             //Read it in
            in.get(ch);
            child.push_back(subtree);      //Add it to child
        } else {              //Found a token
            temp = std::string(1, ch) + readUntil(in, '<');  //Read it in
            std::vector<std::string> tokenList = tokenize(temp);
            for (std::vector<std::string>::const_iterator i = tokenList.begin(); i != tokenList.end(); ++i){
                if (isspace((*i)[0])) 
                    subtree = new whitespace(*i);           //Create token node
                else
                    subtree = new token(*i);                //Create token node
                child.push_back(subtree);                   //Add it to child
            }
            ch = '<';
        }
    }
    return in;
}


/////////////////////////////////////////////////////////////////////
// Output for ASTree::category
//
std::ostream& category::print(std::ostream& out) const {
    if (TAGS) out << "<" << tag << ">"; 
    for (std::vector<ASTree*>::const_iterator i = child.begin(); i != child.end(); ++i) {
        (*i)->print(out);
    }

    if (TAGS) out << "<" << closeTag << ">";
    return out;
}

/////////////////////////////////////////////////////////////////////
// Output for ASTree::token
//
std::ostream& token::print(std::ostream& out) const {
    out << text;
    return out;
}


/////////////////////////////////////////////////////////////////////
// Output for ASTree::whitespace
//
std::ostream& whitespace::print(std::ostream& out) const {
    out << text;
    return out;
}




/////////////////////////////////////////////////////////////////////
// Utilities
//


/////////////////////////////////////////////////////////////////////
// Reads until a ch is encountered.  Does not include ch.
// REQUIRES: in.open()
// ENSURES: RetVal[i] != ch for all i.
//
std::string readUntil(std::istream& in, char ch) {
    char result[256];
    int i = 0;
    in.get(result[i]);
    while (result[i] != ch) {
        ++i;
        in.get(result[i]);
    }
    result[i] = 0;
    return std::string(result);
}


/////////////////////////////////////////////////////////////////////
// Converts escaped XML charaters back to charater form
// REQUIRES: s == "&lt;"
// ENSURES:  RetVal == "<"
//
std::string unEscape(std::string s) {
    unsigned pos = 0;
    while ((pos = s.find("&gt;")) != s.npos)  s.replace(pos, 4, ">");
    while ((pos = s.find("&lt;")) != s.npos)  s.replace(pos, 4, "<");
    while ((pos = s.find("&amp;")) != s.npos) s.replace(pos, 5, "&");
    return s;
}


/////////////////////////////////////////////////////////////////////
// Given: s == "   a + c  "
// RetVal == {"   ", "a", " ", "+", "c", " "}  
//
std::vector<std::string> tokenize(const std::string& s) {
    std::vector<std::string> result;
    std::string              temp = "";
    unsigned i = 0;
    while (i < s.length()) {
        while (isspace(s[i]) && (i < s.length())) {
            temp.push_back(s[i]);
            ++i;
        }
        if (temp != "") {
            result.push_back(temp);
            temp = "";
        }
        while (!isspace(s[i]) && (i < s.length())) {
            temp.push_back(s[i]);
            ++i;
        }
        if (temp != "") {
            result.push_back(temp);
            temp = "";
        }
    }
    return result;
}






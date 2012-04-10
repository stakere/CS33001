/*
 *  ASTree.hpp
 *  Abstract Syntax Tree
 *
 *  Created by Jonathan Maletic on 11/8/11.
 *  Copyright 2012 Kent State University. All rights reserved.
 *
 *  Modified by:
 *
 */

#ifndef INCLUDES_ASTree_H_
#define INCLUDES_ASTree_H_

#include <vector>
#include <iostream>
#include <iomanip>
#include <cassert>

class ASTree;
std::string readUntil(std::istream&, char);
std::string unEscape(std::string);
std::vector<std::string> tokenize(const std::string& s);


enum nodes {category, token, whitespace};
const bool TAGS = false;

////////////////////////////////////////////////////////////////////////
// srcML is an internal data structure for a srcML input file.
// CLASS INV: Assigned(tree)
//
class srcML {
public:
            srcML     () : tree(0) {};
            ~srcML    ();
            srcML     (const srcML&);
    void    swap      (srcML&);
    srcML&  operator= (srcML);
    
    friend  std::istream& operator>>(std::istream&, srcML&);
    friend  std::ostream& operator<<(std::ostream&, const srcML&); 
    
private:
    std::string  header;
    ASTree*      tree;
    //added by MG 
    int          CAP;
};

////////////////////////////////////////////////////////////////////////
// An ASTree is either a: 
//     -Syntactic category node
//     -Token node
//     -Whitespace node
//
// CLASS INV: if (nodeType == category) than (child != 0) && (text == "")
//            if ((nodeType == token) || (nodeType == whitespace)) then (child == 0) && (text != "")
//
class ASTree {
public:
             ASTree    () {};
             ASTree    (nodes t) : nodeType(t) {};
             ASTree    (nodes t, const std::string&);
             ~ASTree   ();
             ASTree    (const ASTree&);
    void     swap      (ASTree&);
    ASTree&  operator= (ASTree);
    
    std::ostream& print (std::ostream&, int) const;
    std::istream& read  (std::istream&);
    
private:
    nodes                nodeType;       //Category or Token node  
    std::string          tag,            //Category: the tag name and 
                         closeTag;       //  Closing tag.
    std::vector<ASTree*> child;          //Category: A vector of subtrees.
    std::string          text;           //Token/whitespace: the text.
};



#endif

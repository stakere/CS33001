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

#ifndef INCLUDES_ASTreeOO_H_
#define INCLUDES_ASTreeOO_H_

#include <vector>
#include <iostream>
#include <iomanip>
#include <cassert>

class ASTree;
std::string readUntil(std::istream&, char);
std::string unEscape(std::string);
std::vector<std::string> tokenize(const std::string& s);

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
    std::string header;   //Header
    ASTree* tree;         //Source code Abstract Syntax Tree
};

////////////////////////////////////////////////////////////////////////
// Abstract Syntax Tree
// An ASTtree has two types of nodes: syntactic category, a token, or whitespace.
//
// This is an Abstract Class, no objects of this type can be defined.
//
class ASTree {
public:
                 ASTree      () {};
    virtual      ~ASTree     () {};
    virtual bool isToken     () const = 0;        //Pure virtual
    virtual bool isWhitespace() const = 0;        //Pure virtual
    virtual bool isCategory  () const = 0;        //Pure virtual
    
    virtual std::ostream& print (std::ostream&) const = 0;  //Pure virtual
    virtual std::istream& read  (std::istream& in) {return in;};
};


////////////////////////////////////////////////////////////////////////
// A category node (internal node) has a  tag name and zero or more childern.  Each child
//  is either another category node or a token.
//
class  category : public ASTree {
public:
                      category    () {};
                      category    (const std::string x) : tag(x) {};
    virtual           ~category   ();
                      category    (const category&);
            void      swap        (category&);
            category& operator=   (category);
    virtual bool      isToken     () const {return false;};
    virtual bool      isWhitespace() const {return false;};
    virtual bool      isCategory  () const {return true;};
    
    virtual std::ostream& print (std::ostream&) const;
    virtual std::istream& read  (std::istream&); 
    
protected:
    std::string           tag, closeTag;  //Tag name and closing tag name.
    std::vector<ASTree*>  child;          //A vector of subtrees.
};


////////////////////////////////////////////////////////////////////////
//A token node is a leaf node.  It contains the actual source code text.
//
class  token : public ASTree {
public:
                 token       () : text() {};
                 token       (const std::string x) {text = unEscape(x);};
    virtual bool isToken     () const {return true;};
    virtual bool isWhitespace() const {return false;};
    virtual bool isCategory  () const {return false;};
    
    virtual std::ostream& print (std::ostream&) const;
    
protected:
    std::string text;         //The token.
};

////////////////////////////////////////////////////////////////////////
//A whitespace node is a leaf node.  It contains blanks and line returns.
//
class  whitespace : public ASTree {
public:
                 whitespace  () : text() {};
                 whitespace  (const std::string x) : text(x) {};
    virtual bool isToken     () const {return false;};
    virtual bool isWhitespace() const {return true;};
    virtual bool isCategory  () const {return false;};
    
    virtual std::ostream& print (std::ostream&) const;
    
protected:
    std::string text;         //The whitespace.
};




#endif

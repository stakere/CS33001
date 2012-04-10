#ifndef _STACK_H_
#define _STACK_H_
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
#include "string.h"
#include <cassert>
#include <new>
#include "blah.h"

template <typename T>
class stack{
public:
	stack():blah(0){};
	stack(const stack<T>&);
	~stack();
	void swap(stack<T>&);
	stack& operator=(stack<T>);
	T pop();
	void push(const T&);
	bool IsFull()const;
	bool IsEmpty()const{return blah==0;};
	bool getTop();

private:
	Node<T> *blah;
	int top;
};

template <typename T>
stack<T>::~stack(){

	while(blah!=0){
		Node<T> *temp = blah;
		blah = blah -> next;
		delete temp;
	}
}

template <typename T>
stack<T>::stack(const stack<T>& actual){

	Node<T> *bottom, *blahing, *temp;
	blah = 0;
	blahing = actual.blah;

	while(blahing!=0){
		temp = new Node<T> (blahing -> data);
		if(blah==0){
			blah = temp;
			bottom = temp;
		}else{
			bottom -> next = temp;
			bottom = temp;
		}
		blahing = blahing -> next;
	}
}

template <typename T>
void stack<T>::swap(stack& rhs){
	Node<T> *temp = blah;
	blah = rhs.blah;
	rhs.blah = temp;
}

template <typename T>
stack<T>& stack<T>::operator=(stack<T> rhs){
	swap(rhs);
	return *this;
}

template <typename T>
T stack<T>::pop(){
	assert(blah!=0);

	Node<T> *temp = blah;
	T result = blah -> data;
	blah = blah -> next;
	delete temp;

	return result;
}

template <typename T>
void stack<T>::push(const T& item){
	assert(!IsFull());
	Node<T> *temp = new Node<T> (item);
	temp -> next = blah;
	blah = temp;
}

template <typename T>
bool stack<T>::IsFull()const{
	Node<T> *temp = new (std::nothrow) Node<T> ();
	if(temp==0)
		return true;
	delete temp;
	return false;
}

template <typename T>
bool stack<T>::getTop(){
    if(IsEmpty())
        throw IsEmpty();
    else
        return blah[top];
}
#endif

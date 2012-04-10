#ifndef CS33001_NODE_H_
#define CS33001_NODE_H_

template <typename T>
 class Node{
public:
	Node():data(), next(0){};
	Node(T item):data(item), next(0){};
	T data;
	Node<T> *next;
 };

#endif
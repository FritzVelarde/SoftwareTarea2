#include <bits/stdc++.h>
using namespace std;


template<class T>
struct Node{
	T data;
	Node * ptrNext;

	Node( Node * nptrNext , T ndata)
	{
		data = ndata;
		ptrNext  = nptrNext;
	}

	Node(){}
};

template<class T>
struct Stacki
{
	Node<T> * Head;
	Node<T> * Tail;

	Stacki(){
		Head = Tail = NULL;
	}

	bool Push(T data){

		if( Head == NULL ){
			Head = Tail = new Node<T>(NULL, data);
			return true;
		}
		Tail->ptrNext = new Node<T>(NULL, data);
		Tail = Tail->ptrNext;
		return true;
	}

	bool Pop();
	void Print();
};

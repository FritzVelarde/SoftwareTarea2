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
  Node<T> * Root;
  bool Push(T data);
  bool Pop();
  void Print();
};

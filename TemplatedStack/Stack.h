/*
 * Stack.h
 *
 *  Created on: Dec 19, 2017
 *      Author: anand
 */

#ifndef STACK_H_
#define STACK_H_
#include <iostream>

#define SIZE 10


template <class T>

class Stack
{
	private:
	T data[SIZE];
	int index;
	int top;

	public:
	Stack();
	virtual ~Stack();
	bool isFull();
	bool isEmpty();
	void push(T data);
	T pop();
	void print();
};

template <class T>
Stack<T>::Stack()
{
	data[SIZE]={0};
	index=0;
	top=0;

}

template <class T>
Stack<T>::~Stack()
{
	delete[]data;

}


template <class T>
void Stack<T>::push(T data)
{
   if(isFull())
   {
       std::cout<<"stack is full"<<std::endl;
   }
   else
   {
	   this->data[index]=data;
	   index++;
	   top++;
   }
}
template <class T>
T Stack<T>::pop()
{
   if(isEmpty())
   {
	   std::cout<<"Empty stack"<<std::endl;
	   return -1;
   }
   else
   {
	   top--;
	   return data[--index];

   }
}
template <class T>
bool Stack<T>::isFull()
{
   if((index+1)>=SIZE)
   {
	   return true;
   }
   else
	   return false;
}

template <class T>
bool Stack<T>::isEmpty()
{
   if(index == 0 && top == 0)
   {
	   return true;
   }
   else
	   return false;
}

template<class T>
void Stack<T>::print()
{
	int localIndex=index;
	while( localIndex  >0 )
	{
		std::cout<<data[--localIndex]<<std::endl;
	}
}

#endif /* STACK_H_ */

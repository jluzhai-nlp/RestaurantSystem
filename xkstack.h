#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include <cstring> 
#define STACK_INIT_SIZE 60
using namespace std;

template <class T>
class Stack
{
	public:
		Stack();
		~Stack(); 
		void Push(T e);
		T Pop();
	private:
		unsigned int stackSize;/*ջ�ռ�*/ 
		T *top; /*ջ��*/ 
		int sp;/*����ջ������*/
		
};

template <class T>
Stack<T>::Stack()
{
	top=(T*)malloc(STACK_INIT_SIZE*sizeof(T));/*����ռ�*/
	if(!top)
	{ 
		cout<<"����ռ�ʧ��";
		exit(0);
	}
	stackSize=STACK_INIT_SIZE;/*��ʼ��ջ�ռ�Ĵ�С*/ 
	sp=0;	
}

template <class T>
Stack<T>::~Stack()
{
	free(top);/*����ڴ�*/ 
}


template <class T>
void Stack<T>::Push(T e)/*��ջ*/ 
{
	top[sp]=e;
	sp++; 
}

template <class T>/*��ջ*/ 
T Stack<T>::Pop()
{
	sp--;
	return top[sp];
}
Stack<char*> stringstack;/*�洢��Ʒ����*/ 
Stack<double> doublestack;/*�洢�۸�*/


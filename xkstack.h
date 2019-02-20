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
		unsigned int stackSize;/*栈空间*/ 
		T *top; /*栈顶*/ 
		int sp;/*根据栈顶增加*/
		
};

template <class T>
Stack<T>::Stack()
{
	top=(T*)malloc(STACK_INIT_SIZE*sizeof(T));/*申请空间*/
	if(!top)
	{ 
		cout<<"分配空间失败";
		exit(0);
	}
	stackSize=STACK_INIT_SIZE;/*初始化栈空间的大小*/ 
	sp=0;	
}

template <class T>
Stack<T>::~Stack()
{
	free(top);/*清除内存*/ 
}


template <class T>
void Stack<T>::Push(T e)/*入栈*/ 
{
	top[sp]=e;
	sp++; 
}

template <class T>/*出栈*/ 
T Stack<T>::Pop()
{
	sp--;
	return top[sp];
}
Stack<char*> stringstack;/*存储商品名称*/ 
Stack<double> doublestack;/*存储价格*/


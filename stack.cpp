#include<iostream>
using namespace std;

#define N 10
char STACK[N];
int top = -1;

char peek()   //To access the TOP element
{
    if(top == -1) 
      {
	 	cout<<"\Sorry! STACK is EMPTY";
	 	return NULL;
	  }
	else
		return STACK[top];
}

void push(char key)   //To insert at the TOP of STACK
{
	if(top == N-1) 
		cout<<"\nSorry! STACK is FULL";
	else
		STACK[++top] = key;
}

char pop()       //To delete and return the TOP element of STack
{
    if(top == -1) 
      {
	 	cout<<"\Sorry! STACK is EMPTY";
	 	return NULL;
	  }
	else
		return STACK[top--];	
}

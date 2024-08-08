#include<iostream>
using namespace std;

#define N 5

int FRONT = -1, REAR = -1;
int Queue[N];

void enque(int item)
{
	if((FRONT == REAR+1) || (FRONT == 0 && REAR == N-1))
	cout<<"\nSorry! QUEUE is FULL";
	
	else if(FRONT == -1)  //Queue is EMPTY
	{
		FRONT = 0; 
		REAR = 0;
		Queue[REAR] = item;
	}
	else if(REAR == N-1)
	{
		REAR = 0;	//Circular Queue
		Queue[REAR] = item;
	}
	else
	{
		REAR++;
		Queue[REAR] = item;
	}	
}

void dequeue()
{
	if(FRONT == -1)
	{
		cout<<"\nSorry! Queue is EMPTY";
	}
	else
	{
		cout<<"\nDeleted Element is: " << Queue[FRONT];
		
		if(FRONT == REAR) {
			FRONT = -1;
			REAR = -1;
		}
		else if(FRONT == N-1) FRONT = 0;
		else FRONT++;
	}
}

int main()
{
	int choice;
	int item;
	do{
		cout<<"\n1. Enqueue";
		cout<<"\n2. Dequeue";
		cout<<"\n0. EXIT";
		
		cout<<"\n\nEnter Your Choice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1: cout<<"\nEnter the input: ";
					cin>>item;
					enque(item); break;
					
			case 2: dequeue();
		
					break;
		
			default: cout<<"\n\n\n Oh! Wrong Choice..."; break;
		}
	}
	while(choice != 0);
}

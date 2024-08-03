//linked list

//elements in the list in the output will be in the reverse order
// this is because we are inserting the elemnnts in the beginning


// code for stack

// code for inserting in the begining as well as in the end

//Create a linked list to store contacts

#include<iostream>
#include<string.h>
using namespace std;

struct Contact
{
string name;
int number;
Contact* link;
};

Contact* phonebook = NULL;
//inserting in the beginning
void insert_beg(string name, int contact)
{
Contact* nd = new Contact();

nd->name = name;
nd->number = contact;

if(phonebook == NULL)
{
//List is EMPTY
nd->link = NULL;
phonebook = nd;
}
else
{
nd->link = phonebook;
phonebook = nd;
}
}

void traverse()
{
Contact* p = phonebook;
while(p != NULL)
{
cout<<p->name <<"\t" <<p->number <<endl;
p = p ->link;
}
}
//inserting at the end
void insert_end(string name, int contact)
{
Contact* nd = new Contact();

nd->name = name;
nd->number = contact;

if(phonebook == NULL)
{
//List is EMPTY
nd->link = NULL;
phonebook = nd;
}
else
{
//find the last node address
Contact* p = phonebook;

nd->link = NULL;

while(p->link != NULL)
{
p = p->link;
}
p->link = nd;
}
}

int main()
{
string n;
int num, input;
do{
cout<<"Enter Name: ";
cin>>n;
cout<<"\nEnter Number: ";
cin>>num;
insert_end(n, num);
cout<<"\nPress Non Zero Value to continue and 0 to Exit";
cin>>input;
}
while(input != 0);
cout<<"\n\n \t * * * CONTACT LIST * * *\n\n";
traverse();
}



//Finding the middle element of a linked list
//Using single loop
//Space complexity is O(1)

Contact* middle()
{
	Contact* p1 = phonebook;    //Slow pointer
	Contact* p2 = phonebook;   //fast pointer
	while(p2 != NULL && p2->link != NULL)
	{
		p1 = p1->link;
		p2 = p2->link;
		p2 = p2->link;
	}
	return p1;
}

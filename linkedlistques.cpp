//Check whether the Linked List contains Loop or Not

bool checkLoop(node* start)
{
	node* slow = start;	
	node* fast = start;
	while(fast != NULL && fast->link != NULL)
	{
		slow = slow->link;
		fast = fast->link->link;
		if(slow == fast) return true;
	}
	return false;
}

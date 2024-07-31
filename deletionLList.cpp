//deletion in linked list


void delete_last(node* start){
ptr=start;
prev=NULL;
while(ptr->next!=NULL){
prev=ptr;
ptr=ptr->next;
}
delete(ptr);
prev->next=NULL;
}

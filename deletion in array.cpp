//Write the Function to Delete the element from index k in an array
#include<iostream>

using namespace std;

int size;
int* arr;

void delete_index(int index)
{
    for(int i=index;i<size-1;i++)
    {
        arr[index]=arr[index+1];
    }
    size--;
}


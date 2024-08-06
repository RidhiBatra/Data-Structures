//Given a sorted binary array
/*A = {0,0,1,1,1,1,1}
Find the index of first 1 in the sorted Binary array containing
0 and 1

condition -> time complexity should be logN.

Basically we have to search first occurance of 1.
'
"
*/

#include<iostream>
using namespace std;

int* array;
int size;

int binary_search()
{
int beg = 0, end = size-1;

while(beg <= end)
{
int mid = (beg + end)/2;
if((array[mid] == 1) &&
((mid == 0) || (array[mid-1] == 0)))
return mid;

else if(array[mid] == 0)
beg = mid + 1;
else
end = mid -1;
}
return -1;
}

int main()
{
cout<<"Enter the Size of Array: ";
cin>>size;

array = new int[size];

for(int i = 0; i<size; i++)
cin>>array[i];

// int item;
//cout<<"\nEnter the element to be Searched: ";
//cin>> item;

int pos = binary_search();
if(pos == -1) cout<<"\nItem is not Present";
else cout<<"\nItem found at index "<<pos;
}

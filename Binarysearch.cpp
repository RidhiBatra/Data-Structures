#Binary Search
#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    for (int mid; left <= right; ) {
        mid = left + (right - left) / 2; // Calculate mid-point

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;
        }
        // If target greater, ignore left half
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }
    // Target not found
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}





#another code
#include<iostream>
using namespace std;

int* array;
int size;

int binary_search(int item)
{
int beg = 0, end = size-1;

while(beg <= end)
{
int mid = (beg + end)/2;
if(item < array[mid]) end = mid-1;
else if(item > array[mid]) beg = mid+1;
else return mid;
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

int item;
cout<<"\nEnter the element to be Searched: ";
cin>> item;

int pos = binary_search(item);
if(pos == -1) cout<<"\nItem is not Present";
else cout<<"\nItem found at index "<<pos;
}

#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int arr[] = {1,10, 11, 9, 100};
    int n = sizeof(arr)/ sizeof(arr[0]);

    // Search

    int key = 11;

    auto it = find(arr, arr+n,key);
    cout<<it<<endl;  // prints address of the key.
    // To get the index of key we subtract the it from the base address of array viz arr.

    int index = it - arr;
    if(index == n)
    {
        cout<<"Element not found\n";
    }
    else
        cout<<"key present at "<<index<<endl;



}
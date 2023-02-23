/*
    find() function is a linear search and takes O(n) complexity.
    However, if the given array is sorted then we can use binary search stl which takes O(logn) complexity.

*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {20, 30, 40,40,40 , 50, 100, 1100};
    int n = sizeof(arr)/ sizeof(arr[0]);
    // Search in sorted array.

    int key;
    cin>>key;

    bool present = binary_search(arr, arr+n,key);
    
    (present)? cout<<"Yes\n": cout<<"No\n";


// First check weather the element is present in the array or not using binary_search().
// Get the index of the element or to check the frequency of any element.
// lower_bound(s,e,key) and upper_bound(s,e,key)

    auto lb = lower_bound(arr, arr+n, 40);  // gives the first index. i.e element>=key.
    cout<<"\n lower bound of 40 is "<<(lb - arr)<<endl;  // This will provide me the index of the lower_bound i.e the first occurence of 40.

    // upper_bound

    auto ub = upper_bound(arr, arr+n, 40);  // give ocurrence of element > key
    cout<<"\n upper bound of 40 is "<<(ub-arr)<<endl;
    
    // if we subtract the value of upper bound and lower bound we will get the frequency of the repeated element.
    // This method can be used to calculate frequecy of any element in a sorted array.

    cout<<"Frequecy of 40 is"<<(ub-lb)<<endl;


    // upper_bound() and lower_bound() takes O(logn) complexity.
    return 0;  
}


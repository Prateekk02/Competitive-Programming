// Store unique elements.
// uses self balancing tree for implementation.
// You can't update the inserted elements in set.
#include<iostream>
#include<set>

using namespace std;

int main()
{
    int arr[] = {10,20,11,9,8,11,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    // Insert element in the set.


    set <int> s(arr, arr+n);
    // or use s.insert(arr[i]) in a loop

    // Print all the elements.
    for(auto i = s.begin(); i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    // erase

    s.erase(10);
    for(auto x: s)
    cout<<x<<" ";
    return 0;
}
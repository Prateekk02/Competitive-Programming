#include<iostream>
#include<set>
using namespace std;
// Stores multiple elements that have same elements.
// Stored in a specific order --> sorted according to internal comparison object.
// Values once inseted can't be modified
// Associative container --> elements are referred by their value and not by the index
// Underlying data structure --> BST

typedef multiset<int>:: iterator IT;
int main()
{
    int arr[] = {10,20, 30, 20, 10, 10,30,30,86,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    multiset<int> m(arr, arr+n);
     
    // Iterate

    for(int x: m){
        cout<<x<<" ";
    }
    // Erase.
    cout<<endl;
    m.erase(20);  // delete all occurrence of 20 
    // Insert
    cout<<endl;
    m.insert(80);
    // count  --> no. of occurrence of element.
    cout<<endl;
    cout<<"Count "<<m.count(10);
    
    // find
    cout<<endl;
    auto it = m.find(30);   // first occurence of 30

    cout<<(*it)<<endl;

    // get all elements which are equal to 30

    pair <IT,IT> range = m.equal_range(30);

    for(auto i = range.first ; i!=range.second; i++)
    cout<<*it<<" ";

    // Lower >= and Upper bound >
    cout<<endl;
    for(auto i= m.lower_bound(10); i!=m.upper_bound(80); i++)
        cout<<*i<<" ";
    return 0;
}
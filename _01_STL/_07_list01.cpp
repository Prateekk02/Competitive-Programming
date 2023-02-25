#include<iostream>
#include<list>
using namespace std;
// list ---> doubly linked list
// useful to insert and delete from beginning and end  --> O(1)
/*
    List provides us with the methods.
    push_back()
    push_front()
    pop_back()
    pop_front()
    insert()
    erase(idx)
    remove()
*/
int main()
{
    list<int> l= {8,5,6,4,7,3,89,34,23};

    for(int x: l)
        cout<<x<<" ";

    // Sort list
    cout<<endl;
    l.sort();

    for(int x: l)
        cout<<x<<" ";

        cout<<endl;

    // Reverse the list.
    
    l.reverse();

    for(int x: l)
        cout<<x<<" ";

    // Direct Access does not work in case of list.

        return 0;
}
/*
    It is actually implemented as a heap.
    push() --> O(logn)
    pop() --> O(logn)
    top() --> O(1)
    empty()
*/

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue <int> pq;
    
    int n;
    cin>>n;

    for(int i=1;i<n;i++)
    {
        int no;
        cin>>no;
        pq.push(no); // O(logN)
    }

        // Remove the elements from the heap

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    // by default priority queue acts as max heap
    // to convert it into min heap we use greater<int>

    priority_queue<int, vector<int>, greater<int>> pq1;

    for(int i=1;i<=n;i++)
    {
        int no;
        cin>>no;
        pq1.push(no);
    }

    while(!pq1.empty())
    {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }

}
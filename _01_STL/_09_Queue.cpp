#include<iostream>
#include<queue>
/*
    FIFO Data structure.
    Elements are added from the rear side and removed from the front side.
    Important functions are:-
    push()
    pop()
    front()
    empty()
*/
using namespace std;

int main()
{
    queue<int> q;
    for(int i=1; i<=5;i++)
    {
        q.push(i);
    }

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
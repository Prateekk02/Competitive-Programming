#include<iostream>
#include<stack>
using namespace std;
/*
    push(element)    ---> O(1)
    pop()            ---> O(1)
    top() --> what is at the top --> o(1)
    isempty()


    Direct Access not available.
*/



int main()
{

    // LIFO data structure.
    
    stack<int> s;

    for(int i=0;i<=5;i++)
    {
        s.push(i); 
    }

    // loop 
    while(!s.empty()){
        cout<<s.top()<<" ,"; 
        s.pop();
    }

    return 0;
}
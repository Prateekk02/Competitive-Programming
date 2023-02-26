#include<iostream>
#include<map>
#include<string>
using namespace std;
// Map is an associative container which stores key value pair.
/*
    insert(k,v)
    query(k)   ----> find()
    delete()  ---> erase()
    >> Map uses self balancing BST .
*/
int main()
{
    map <string, int> m;
    // Insert

    m.insert(make_pair("mango", 100));


    pair<string, int> p;
    p.first = "banana";
    p.second = 120;
    m.insert(p);

    m["orange"] = 20;
    
    // Search

    string fruit;
    cin>>fruit;
    
    //Update.

    m[fruit] +=20;

    // map <string, int> :: iterator it;  
    auto it = m.find(fruit);
    if(it!= m.end())
    {
        cout<<"Price of "<< fruit<<" is "<<m[fruit]<<endl;
    }
    else   
        cout<<"Fruit is not present\n";

    // Another way to find a particular map
    // it stores unique keys only once.
    // find() --> returns iterator
    // count() --> returns integer 0 or 1 .
    if(m.count(fruit))
        cout<<"Price is "<<m[fruit]<<endl;

    // Erase .
    m.erase(fruit);
    m["litchi"] = 60;
    m["pineapple"] = 80;


    // Iterate over all the key value pair.

    
    for(auto it = m.begin(); it!=m.end(); it++)
        cout<<it->first<<" "<<it->second<<endl;


    return 0;
}
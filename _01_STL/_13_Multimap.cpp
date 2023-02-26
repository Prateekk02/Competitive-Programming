// Multipla key can have same keys.

#include<iostream>
#include<map>
#include<cstring>

using namespace std;

int main()
{
    multimap<char, string> m;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        char ch;
        string s;
        cin>>ch>>s;
        m.insert(make_pair(ch,s));
    }
    // Erase 

    auto it = m.begin();
    m.erase(it);

    auto it2 = m.lower_bound('b');

    auto it3 = m.upper_bound('b');

    for(auto it4 = it2; it4!=it3; it4++)
    {
        cout<<it4->second<<" , "<<endl; 
    }

    // Try to print the entire map

    for(auto p : m)
    {
        cout<<p.first<<" -> "<<p.second<<endl;
    }

    // Find and delete

    auto f = m.find('c');
    if(f->second == "cat")
    {
        m.erase(f);
    }
    return 0;
}
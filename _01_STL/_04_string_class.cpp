// String class is a good alternative of character array.
// String class is not a data structure but a container.
#include<iostream>
#include<string>
using namespace std;


int main()
{
    // String initialize.

    string s0;
    string s1("Hello there!");

    string s2 = "Hello there!";

    string s3(s2);  // s2 and s3 will be same.

    string s4 = s3; // s4 and s3 will be same.

    char a[] = {'a', 'b', 'c', '\0' };
    string s5(a);

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    // Weather string is empty or not.

    if(s0.empty())
        cout<<"s0 is empty\n";

    // We can add characters in strings.

    s0.append("Well!");
    cout<<s0<<endl; 

    s1 = "Well!, " + s1;
    cout<<s1<<endl;

    // Remove or erase.

    cout<<"Lenght of s0 "<<s0.size()<<endl;
    s0.clear();
    cout<<"After erasing lenght of s0 "<<s0.size()<<endl;

    // Compare two string

     s0 = "Anakin";
     s1 = "Darth Vader";
    // Lexographical comparison takes place.
     cout<<s0.compare(s1)<<endl;  // Returns an interger == 0 equal, >0 or <0.
     cout<<s1.compare(s0)<<endl; 

     // We can also use < or > operator as it is already overloaded for strings.
    
    cout<<"s0>s1 "<<(s0>s1)<<endl;
    cout<<"s0<s1 "<<(s0<s1)<<endl;
    
    // Find Substrings.

    string s = "I want to have apple juice";
    int idx = s.find("apple");

    cout<<idx<<endl;

    // Remove a word from a string.

    string word = "apple";
    int len = word.size();
    s.erase(idx, len+1);
    cout<<"Modified s: "<< s<<endl;
    

    // Iterate over all the characters in the string.

    for(int i=0;i<s.size(); i++)
    {
        cout<<s[i]<<":";
    }
    cout<<endl;
    // Iterators

    for(auto it = s.begin(); it!= s.end(); it++)
    {
        cout<<(*it)<<",";
    }
    return 0;
    
    cout<<endl;
    // Using for each loop

    for(auto c : s)
    {
        cout<<c<<".";
    }

}
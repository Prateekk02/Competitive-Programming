#include<iostream>
#include<cstring>
using namespace std;

// char *strtok(char *s, char *delimiters)
// returns a token on each subsequent call.
// On the first call function should be passed with string argument for 's'.
// On subsequent calls we should pass the string argument as null.
// We can use this function to break a string around a given character.

int main()
{
    char s[100] = "Today is a rainy day";
    char *ptr = strtok(s, " ");
 
    while(ptr!=NULL)
    {
        cout<<ptr<<endl;
        ptr = strtok(NULL, " ");
    }
    return 0;

} 
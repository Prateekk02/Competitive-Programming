/*
     Policy based DS is just like set but it provides us 2 more functionality
     1) find_by_order()
     2) order_of_key()

     Elements are inserted in the new_data_set s;
     and then we can find kth largest element in that set in log n time
     using find_by_order()

     If the element is not present in it then it will return that position where it can be inserted in the data structure.

 */
#include<bits/stdc++.h>
#include <cstdio>
#include <cstdlib>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;

using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update>
        PBDS;

int main()
{
    #ifdef ONLINEJUDGE
        freeopen("input.txt", "r", stdin)
        freeopen("output.txt","w",stdi)
    #endif

    PBDS st;
    st.insert(1);
    st.insert(3);
    st.insert(4);
    st.insert(0);
    st.insert(10);
    st.insert(15);


    // kth largest element till now in log n time.
    for(int i=0;i<st.size();i++)
    {
        cout<<i<<" "<<*st.find_by_order(i)<<'\n';
    }

    // How many element is strictly smaller than the current element in log n
    // It basically finds the lower bound of a number.
    
    cout<<st.order_of_key(5)<<'\n';

    

    return 0;
}
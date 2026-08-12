#include<iostream>
// #include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{
    set<int> st;
    st.insert(1);
    st.emplace(3);
    st.insert(7);
    st.insert(9);
    st.insert(10);
    st.insert(5);
    st.insert(100);
    st.insert(2);
    cout << *(st.lower_bound(9)) << endl;
    cout << *(st.upper_bound(9));
    return 0;


}
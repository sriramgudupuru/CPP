#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int arr[256] = {0};
    int i;
    cout << "enter a string : ";
    cin >> s;
    for(i = 0; i < s.size(); i++)
        arr[s[i]]++;
    int m;
    char ch;
    cout << "no.of queries you want to enter : ";
    cin >> m;
    for(i = 0; i < m; i++)
    {
        cin >> ch;
        cout << "no.of times " << ch << "present is : " << arr[ch] << endl;
    }


}
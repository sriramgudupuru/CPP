#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int x;

    cout << "Enter numbers (Ctrl+Z + Enter to stop on Windows):\n";

    while (cin >> x) {
        v.push_back(x);
    }

    cout << "\nYou entered:\n";
    for (const int &val : v) {
        cout << val << " ";
    }
    return 0;
}
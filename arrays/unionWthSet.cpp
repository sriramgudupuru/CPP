#include<bits/stdc++.h>
using namespace std;

vector <int> unionWithSet(int arr1[], int arr2[], int size1, int size2){
    vector <int> unio;
    set <int> unioSet;
    for(int i=0; i<size1; i++){
        unioSet.insert(arr1[i]);
    }
    for(int i=0; i<size2; i++){
        unioSet.insert(arr2[i]);
    }
    for(auto it:unioSet)
    {
        unio.push_back(it);
    }
    return unio;
}
int main(){
    int arr1[] = {3,4,4,6,8};
    int arr2[] = {4,5,6,6,7,9};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    vector <int> unio = unionWithSet(arr1, arr2, size1, size2);
    for(int i=0; i<unio.size(); i++)
    {
        cout << unio[i] << " ";
    }

}
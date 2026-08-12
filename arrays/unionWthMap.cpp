#include<bits/stdc++.h>
using namespace std;

vector <int> unionWthMap(int arr1[], int arr2[],int size1, int size2){
    map <int,int> unioMap;
    vector <int> unio;
    for(int i=0; i<size1; i++)
    {
        unioMap[arr1[i]]++;
    }
    for(int i=0; i<size2; i++){
        unioMap[arr2[i]]++;
    }
    for(auto it:unioMap){
        unio.push_back(it.first);
    }
    return unio;
}

int main(){
    int arr1[] = {3,5,7,7,8,10};
    int arr2[] = {4,5,7,7,8,9,11};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    vector <int> unio = unionWthMap(arr1,arr2,size1,size2);
    for(int i=0; i<unio.size(); i++)
    {
        cout << unio[i] << " ";
    }
}
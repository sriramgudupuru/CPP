#include<bits/stdc++.h>
using namespace std;

class unionOfTwoSortedArrays{
  public:   
    void unioning(vector <int> &arr1, vector <int> &arr2){
        int i = 0, j = 0;
        vector <int> temp;
        int element;
        while(i < arr1.size()  && j < arr2.size() ){
            if (arr1[i] > arr2[j])
            {
                element = arr2[j];
                j++;
            }
            else{
                element = arr1[i];
                i++;
            }
            if(temp.empty()){
                temp.push_back(element);
            }
            else if( *(temp.end() - 1) < element){
                temp.push_back(element);
            }
        }
        while(i < arr1.size()){
            if( *(temp.end() - 1) < arr1[i]){
                temp.push_back(arr1[i]);
            }
            i++;
        }
        while(j < arr2.size()){
            if( *(temp.end() - 1) < arr2[j]){
                temp.push_back(arr2[j]);
            }
            j++;
        }
        for(int i = 0; i < temp.size(); i++){
            cout << temp[i] << " ";
        }
    }
};
main(){
    vector <int> arr1 = {1,2,3,4,5};
    vector <int> arr2 = {2,3,4,4,5};
    unionOfTwoSortedArrays u;
    u.unioning(arr1,arr2);

}
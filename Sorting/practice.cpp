#include<bits/stdc++.h>
using namespace std;
class sorting{
    public:
        void splitting(vector <int> &v,int low, int high){
            if(low < high){
                int midIndex = (low + high)/2;
                splitting(v,low,midIndex);
                splitting(v,midIndex+1,high);
                merging(v,low,midIndex,high);
            }
        }
        void merging(vector <int> &v, int low, int midIndex, int high){
            vector <int> temp;
            int left = low;
            int right = midIndex+1;
            while(left <=midIndex && right <=high){
            if(v[left] < v[right] ){
                temp.push_back(v[left]);
                left++;
            }
            else{
                temp.push_back(v[right]);
                right++;
            }
            }
            while(left <= midIndex){
                temp.push_back(v[left]);
                left++;
            }
            while(right <= high){
                temp.push_back(v[right]);
                right++;
            }
            for(int i = low; i <= high; i++){
                v[i]= temp[i-low];
            }
        }
};

int main(){
    cout << "Enter numbers: ";
    int element;
    vector <int> v;
    while(cin >> element){
        v.push_back(element);
    }
    sorting s;
    s.splitting(v,0,v.size()-1);
    cout << "\n";
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    
}
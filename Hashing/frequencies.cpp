#include<bits/stdc++.h>
using namespace std;

class num_freq{
    public:
        unordered_map <int,int> freq_calcu(vector <int> &v){
                unordered_map <int, int> m;
                for(int i = 0; i < v.size(); i++){
                    m[v[i]]++;
                }
                return m;
        }
       void show_freq(unordered_map <int,int> &m){
                for(auto i = m.begin(); i!=m.end(); i++){
                    cout << (*i).first << "  "<< (*i).second<<endl;
                }
       }
       void show_hfreq_lfreq(unordered_map <int,int> &m){
                int max_fkey = ((*(m.begin())).first);//first key in map
                int min_fkey = ((*(m.begin())).first);//first key in map
                int max_fvalue = m[max_fkey];//first value in map
                int min_fvalue = m[min_fkey];//first value in map
                for(auto i = m.begin(); i != m.end(); i++){
                    if((*i).second > max_fvalue){
                        max_fkey = (*i).first;
                        max_fvalue = (*i).second;//max_fvalue = m[max_fkey]; but this is bad practice bcz
                                                //m[] is good for insert and update.
                    }
                    else if((*i).second < min_fvalue){
                        min_fkey = (*i).first;
                        min_fvalue = (*i).second;//min_fvalue = m[min_fkey];
                    }
                }
                cout << min_fkey << " ";
                cout << max_fkey;
       }
    };
int main(){
    cout << "hello";
    vector <int> v;
    int vec_size;
    cout << "Enter array size: ";
    cin >> vec_size;
    int element;
    cout << "Enter elements: ";
    for(int i = 0; i < vec_size; i++){
        cin >> element;
         v.push_back(element);
    }
    num_freq h;
    unordered_map <int,int> m = h.freq_calcu(v);
    h.show_freq(m);
    h.show_hfreq_lfreq(m);
#include<bits/stdc++.h>
using namespace std;

class divisors {
    public:
        void divs(int num){
            for(int i=1; i<=sqrt(num); i++){
                if(num%i==0){
                    cout << i << " ";
                    if(num/i != i){
                    cout << num/i <<" ";
                    }
                }
            }
        }
};

int main(){
    int num;
    cout << " Enter a number to find its divisors : \n";
    cin >> num;
    divisors d;
    d.divs(num);
    
}
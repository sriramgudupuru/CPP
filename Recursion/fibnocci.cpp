#include<bits/stdc++.h>
using namespace std;

class fibnocci{
    public:
        int secondLast;
        int Last;
        int fib(int g){
                if(g == 1){                    
                    return 1;
                }
                else if(g == 0){                  
                    return 0;
                }
                secondLast = g - 2;
                Last = g - 1;
                return fib(secondLast)+fib(Last);
        }
};

int main(){
    int goal;
    cout << "Enter a number: ";
    cin >> goal;
    int n = goal;
    fibnocci f;
    for(int i = 0; i<= n; i++){
        cout << " hello ";
        cout << f.fib(i) << " " ;
        cout << i;
    }
  

}
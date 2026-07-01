#include<bits/stdc++.h>
using namespace std;
//Note: pow returns double type, if you int for result variable, then it cut downs the value 1 or more. so use double 
//To get no.of digits , can do as: to_string().length() or to_string().size();
class armstrong{
    public:
        void arms(int num){
            double result=0,rem;
            double temp = num;
            int d = log10(num)+1;
            d= to_string(num).size(); 
            while(num!=0){
                rem = num%10;
                result =result + pow(rem,d);// 
                num = num/10;
            }
            if(temp == result){
                cout << "Yes, armstrong";
                
            }
            else {
               
                cout << "No, not an armstrong";
            }
        }
};

int main(){
    int num;
    cout << "Enter a number to check ";
    cin >> num;
    armstrong a;
    a.arms(num);

}
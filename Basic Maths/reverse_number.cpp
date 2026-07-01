#include<bits/stdc++.h>

using namespace std;

class reverse_num{
    public:
        void rev_num(int num){
            int r=0;
            while(num>0){
                r = (r*10)+(num%10);
                num = num/10;
            }
            cout << r;
        }
};
int main(){
    int num;
    cout << "Enter number to reverse: ";
    cin >> num;
    reverse_num r;
    r.rev_num(num);
    return 0; 

}
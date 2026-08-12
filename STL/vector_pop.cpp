#include<iostream>
#include<vector>
// using namespace std;

int main()
{
    std::vector<int> v =  {3};  
    v.push_back(1);
    std::cout << v[1];
    v.pop_back();
    std::cout << v[1];


}
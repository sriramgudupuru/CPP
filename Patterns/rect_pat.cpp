#include<iostream>

int main()
{
    int side;
    std::cout << "enter side of a square" << std::endl;  
    std::cin >> side ;
    for(int i = 1; i<=side; i++) 
    {
        for(int j=1;j<= side ; j++)
            std::cout << "*";
        std::cout << std::endl;
    }
}
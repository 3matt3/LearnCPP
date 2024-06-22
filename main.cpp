//
// Created by matt on 6/22/24.
//
#include "iostream"

int main()
{
    std::cout << "Wow hi you made it!!\n";
    std::cout << "Enter a number: \n";
    int num{};
    std::cin >> num;
    std::cout << "You entered " << num << '\n';

    if(num == 3)
        std::cout << "You are a mad cunt. 3 is THE number.\n";

    return 0;
}
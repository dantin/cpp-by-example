#include <iostream>

int main()
{

    std::cout << "Enter two numbers:" << std::endl;
    int upper, lower;
    std::cin >> lower >> upper;
    int i;

    i = lower < upper ? lower : upper;
    upper = lower < upper ? upper : lower;

    while(i <= upper) {
        std::cout << i << std::endl;
        i++;
    }

    return 0;
}

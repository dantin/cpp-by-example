#include <iostream>

int main()
{
    // ri is a reference to i
    int i = 0, &ri = i;
    // ri is just another name for i;
    std::cout << i << " " << ri << std::endl;

    // changing i is reflected through ri as well
    i = 5;
    std::cout << i << " " << ri << std::endl;

    // assigning to ri actually assigns to i
    ri = 10;
    std::cout << i << " " << ri << std::endl;

    return 0;
}

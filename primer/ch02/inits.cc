#include <iostream>
#include <string>

int main()
{
    int v1(1024);    // direct-initialization
    int v2{1024};    // direct-initialization
    int v3 = 1024;   // copy-initialization
    int v4 = {1024}; // copy-initialization

    std::string titleA = "C++ Primer, 5th Ed.";
    std::string titleB("C++ Primer, 5th Ed.");
    std::string all_nines(10, '9'); // all_nines = "999999999"

    return 0;
}

#include <iostream>
#include <typeinfo>

int main()
{
    const int i = 42;
    auto j = i;                 // j is an int
    const auto &k = i;          // k is const int&
    auto *p = &i;               // p is const int*
    const auto j2 = i, &k2 = i; // j2 is const int, k2 is const int&

    std::cout << "j is " << typeid(j).name()
              << "\nk is " << typeid(k).name()
              << "\np is " << typeid(p).name()
              << "\nj2 is " << typeid(j2).name()
              << "\nk2 is " << typeid(k2).name()
              << std::endl;
    
    return 0;
}

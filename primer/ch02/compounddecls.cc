#include <iostream>

int main()
{
    // i is an int; p is a pointer to int; r is a reference to int
    int i = 1024, *p = &i, &r = i;

    std::cout << i << " " << *p << " " << r << std::endl;

    int j = 42, *p2 = &j;
    // pref is a reference ot the pointer p2
    int *&pref = p2;

    std::cout << *pref << std::endl;

    pref = &i;
    std::cout << *pref << std::endl;

    *pref = 0;
    std::cout << i << " " << *pref << std::endl;

    return 0;
}

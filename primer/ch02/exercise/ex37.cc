#include <iostream>

int main()
{
    int a = 0, b = 0;
    decltype((a)) c = a;
    decltype(a = b) d = a;
    ++c;
    std::cout << "a: " << a << " c: " << c << " d: " << d << std::endl;
    ++d;
    std::cout << "a: " << a << " c: " << c << " d: " << d << std::endl;

    return 0;
}

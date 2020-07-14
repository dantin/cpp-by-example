#include <iostream>

int main() {
    int a = 0;
    decltype(a) c = a;    // c is an int
    decltype((a)) d = a;  // d is a reference to a
    ++c;
    std::cout << "a: " << a << " c: " << c << " d: " << d << std::endl;
    ++d;
    std::cout << "a: " << a << " c: " << c << " d: " << d << std::endl;

    return 0;
}

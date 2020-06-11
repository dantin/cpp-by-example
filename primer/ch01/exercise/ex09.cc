#include <iostream>

int main()
{
    int i, sum = 0;
    int begin = 50, end = 100;

    i = begin;
    while(i <= end) {
        sum += i;
        i++;
    }

    std::cout << "Sum from " << begin
        << " to " << end
        << " is " << sum
        << std::endl;

    return 0;
}

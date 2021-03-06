#include <iostream>

#include "Sales_item.h"

int main() {
    Sales_item currVal, val;

    if (std::cin >> currVal) {
        int cnt = 1;
        while (std::cin >> val) {
            if (val.isbn() == currVal.isbn()) {
                ++cnt;
            } else {
                std::cout << currVal.isbn() << " occurs "
                          << cnt << " times" << std::endl;
                cnt = 1;
                currVal = val;
            }
        }
        std::cout << currVal.isbn() << " occurs "
                  << cnt << " times" << std::endl;
    }

    return 0;
}

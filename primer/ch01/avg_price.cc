#include <iostream>

#include "Sales_item.h"

int main()
{
    Sales_item total; // variable to hold data for the next transaction

    // read the first transaction and ensure that there are data to process
    if (std::cin >> total) {
        // variable to hold the running sum
        Sales_item trans;
        // read and process the remaining transactions
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans;
            } else {
                // print results for the previous block
                std::cout << total << std::endl;
                total = trans;
            }
        }
        // print the last transaction
        std::cout << total << std::endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}

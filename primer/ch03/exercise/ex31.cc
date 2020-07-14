#include <iostream>
#include <cstddef>

using std::size_t;
using std::cout;
using std::endl;

int main() {
    const size_t BUF_SIZE = 10;
    int ia[BUF_SIZE];

    for (size_t i = 0; i < BUF_SIZE; ++i) {
        ia[i] = i;
    }

    for (size_t i = 0; i < BUF_SIZE; ++i) {
        cout << ia[i] << " ";
    }
    cout << endl;

    return 0;
}

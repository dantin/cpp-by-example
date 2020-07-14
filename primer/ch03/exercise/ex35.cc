#include <cstddef>
#include <iterator>
#include <iostream>

using std::size_t;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main() {
    const size_t BUF_SIZE = 10;
    int ia[BUF_SIZE];

    for (int *ptr = begin(ia); ptr != end(ia); ++ptr) {
        *ptr = 0;
    }

    cout << "ia: ";
    for (auto i : ia) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

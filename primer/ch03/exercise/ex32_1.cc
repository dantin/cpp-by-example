#include <vector>
#include <iostream>
#include <cstddef>

using std::vector;
using std::size_t;
using std::cout;
using std::endl;

int main() {
    const int BUF_SIZE = 10;
    vector<int> ia;

    for (int i = 0; i < BUF_SIZE; ++i) {
        ia.push_back(i);
    }

    cout << "ia: ";
    for (auto i : ia) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> ib = ia;

    cout << "ib: ";
    for (auto i : ib) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

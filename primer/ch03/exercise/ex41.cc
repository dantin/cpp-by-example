#include <vector>
#include <iterator>
#include <iostream>

using std::vector;
using std::begin;
using std::end;
using std::cout;
using std::endl;

int main() {
    int ia[] = { 1, 2, 3, 4, 5 };
    vector<int> ivec(begin(ia), end(ia));

    cout << "ivec: ";
    for (auto i : ivec) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

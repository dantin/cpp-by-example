#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

void print_vec(const vector<int> &ivec) {
    for (auto i : ivec) {
        cout << i << " ";
    }
    cout << endl;
}

bool compare_vec(const vector<int> &lhs, const vector<int> &rhs) {
    return lhs == rhs;
}

int main() {
    vector<int> ia = { 1, 2, 3, 4 };
    vector<int> ib = { 1, 3, 3 };

    cout << "ia: ";
    print_vec(ia);

    cout << "ib: ";
    print_vec(ib);

    if (compare_vec(ia, ib)) {
        cout << "equal" << endl;
    } else {
        cout << "NOT equal" << endl;
    }

    return 0;
}

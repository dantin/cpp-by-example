#include <cstddef>
#include <iostream>

using std::size_t;
using std::cout;
using std::endl;

int main() {
    int ia[3][4] = {
        { 0, 1,  2,  3 },
        { 4, 5,  6,  7 },
        { 8, 9, 10, 11 }
    };

    // 1. range for
    cout << "ia[3][4]: " << endl;
    for (const int (&row)[4] : ia) {
        for (int col : row) {
            cout << col << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 2. for loop using subscripts
    cout << "ia[3][4]: " << endl;
    for (size_t i = 0; i < 3; ++i) {
        for (size_t j = 0; j < 4; ++j) {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 3. for loop using pointer
    cout << "ia[3][4]: " << endl;
    for (int (*row)[4] = ia; row != ia + 3; ++row) {
        for (int *col = *row; col != *row + 4; ++col) {
            cout << *col << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}

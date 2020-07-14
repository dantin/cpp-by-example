#include <iterator>
#include <cstddef>
#include <iostream>

using std::begin;
using std::end;
using std::size_t;
using std::cin;
using std::cout;
using std::endl;

int main() {
    int ia[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    int *p = ia;  // p points to the first element in ia
    ++p;          // p points to ia[1]

    int *e = &ia[10];  // pointer just past the last element in ia
    for (int *b = ia; b != e; ++b) {
        cout << *b << " ";  // print the elements in ia
    }
    cout << endl;

    const size_t SZ = 10;
    int arr[SZ];  // array of 10 ints

    for (auto &n : arr) {
        cin >> n;  // for each element in arr
    }

    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // pbeg points to the first and
    // pend points just past the last element in arr
    int *pbeg = begin(arr),  *pend = end(arr);

    // find the first negative element,
    // stopping if we've seen all the elements
    while (pbeg != pend && *pbeg >= 0) {
        ++pbeg;
    }
    if (pbeg == pend) {
        cout << "no negative elements in arr" << endl;
    } else {
        cout << "first negative number was " << *pbeg << endl;
    }

    return 0;
}

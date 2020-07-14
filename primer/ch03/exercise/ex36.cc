#include <iterator>
#include <iostream>

using std::cout;
using std::endl;
using std::begin;
using std::end;

bool compare_array(const int *lhs_beg, const int *lhs_end,
        const int *rhs_beg, const int *rhs_end) {
    const int *lhs = lhs_beg;
    const int *rhs = rhs_beg;

    while (lhs != lhs_end && rhs != rhs_end) {
        if (*lhs == *rhs) {
            lhs++;
            rhs++;
        } else {
            return false;
        }
    }

    return lhs == lhs_end && rhs == rhs_end;
}

void print_array(int *pbeg, int *pend) {
    for (const int *ptr = pbeg; ptr != pend; ++ptr) {
        cout << *ptr << " ";
    }
    cout << endl;
}

int main() {
    int ia[] = { 1, 2, 3, 4 };
    int ib[] = { 1, 3, 3 };

    cout << "ia: ";
    print_array(begin(ia), end(ia));

    cout << "ib: ";
    print_array(begin(ib), end(ib));

    if (compare_array(begin(ia), end(ia), begin(ib), end(ib))) {
        cout << "equal" << endl;
    } else {
        cout << "NOT equal" << endl;
    }

    return 0;
}

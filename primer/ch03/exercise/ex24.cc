#include <vector>
#include <iostream>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
    vector<int> nums;
    int n;

    while (cin >> n) {
        nums.push_back(n);
    }

    cout << "adjacent pair:   ";
    auto it = nums.cbegin();
    while (it != nums.cend()) {
        int lhs = *(it++);
        if (it == nums.cend()) {
            cout << lhs << " ";
            continue;
        }
        cout << lhs + *(it++)<< " ";
    }
    cout << endl;

    cout << "first-last pair: ";
    auto head = nums.cbegin(), tail = nums.cend();
    while (head != tail) {
        --tail;
        if (head == tail) {
            cout << *head << " ";
            break;
        } else {
            cout << *head + *tail << " ";
            ++head;
        }
    }
    cout << endl;

    return 0;
}

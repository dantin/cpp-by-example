#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main() {
    vector<int> nums;

    for (int i = 0; i < 10; ++i) {
        nums.push_back(i + 1);
    }

    cout << "original:  ";
    for (auto it = nums.cbegin(); it != nums.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it = nums.begin(); it != nums.end(); ++it) {
        *it *= 2;
    }

    cout << "processed: ";
    for (auto it = nums.cbegin(); it != nums.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}

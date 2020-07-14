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
    for (decltype(nums.size()) i = 0; i < nums.size(); i += 2) {
        int lhs, rhs;
        lhs = nums[i];
        if (i != nums.size()) {
            rhs = nums[i + 1];
        } else {
            rhs = 0;
        }
        cout << lhs + rhs << " ";
    }
    cout << endl;

    cout << "first-last pair: ";
    for (decltype(nums.size()) head = 0, tail = nums.size() - 1;
         head <= tail;
         ++head, --tail) {
        if (head != tail) {
            cout << nums[head] + nums[tail] << " ";
        } else {
            cout << nums[head] << " ";
        }
    }
    cout << endl;

    return 0;
}

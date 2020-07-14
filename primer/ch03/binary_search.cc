#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

bool binary_search(const vector<int> &nums, const int target) {
    auto beg = nums.begin(), end = nums.end();
    auto mid = nums.begin() + (end - beg) / 2;  // original midpoint

    while (mid != end && *mid != target) {
        if (target < *mid) {
            end = mid;
        } else {
            beg = mid + 1;
        }
        mid = beg + (end - beg) / 2;
    }

    return *mid == target;
}

int main() {
    vector<int> nums;

    for (int i = 0; i < 10; ++i) {
        nums.push_back(i + 1);
    }

    cout << "nums: ";
    for (auto n : nums) {
        cout << n << " ";
    }
    cout << endl;

    vector<int> targets = { 5, 12};
    for (auto target : targets) {
        bool found = binary_search(nums, target);
        if (found) {
            cout << target << " was found!" << endl;
        } else {
            cout << target << " was not found!" << endl;
        }
    }

    return 0;
}

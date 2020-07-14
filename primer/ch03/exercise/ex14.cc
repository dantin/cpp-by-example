#include <vector>
#include <iostream>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
    int num;
    vector<int> nums;

    while (cin >> num) {
        nums.push_back(num);
    }

    for (auto n : nums) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}

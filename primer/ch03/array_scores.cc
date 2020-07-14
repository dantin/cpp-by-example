#include <cstddef>
#include <vector>
#include <iostream>

using std::size_t;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
    vector<unsigned> grades;
    // count the number of grades by clusters of ten:
    // 0--9, 10--19, ..., 90-99, 100
    unsigned scores[11] = {};  // 11 buckets, all value initialized to 0
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100) {
            // increment the counter for the current cluster
            ++scores[grade/10];
        }
    }
    cout << "grades.size = " << grades.size() << endl;

    for (auto g : grades) {  // for every element in grades
        cout << g << " ";
    }
    cout << endl;

    for (auto i : scores) {
        cout << i << " ";
    }
    cout << endl;
}

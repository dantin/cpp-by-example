#include <vector>
#include <iostream>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
    vector<unsigned> grades;

    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100) {
            grades.push_back(grade);
        }
    }
    cout << "grades.size = " << grades.size() << endl;
    for (auto it : grades) {
        cout << it << " ";
    }
    cout << endl;

    // count the number of grades by clusters of ten:
    // 0--9, 10--19, ..., 90-99, 100
    vector<unsigned> scores(11, 0);
    for (auto it = grades.begin(); it != grades.end(); ++it) {
        unsigned i = *it;
        ++(*(scores.begin() + i / 10));
    }

    cout << "scores.size = " << scores.size() << endl;
    for (auto it = scores.begin(); it != scores.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}

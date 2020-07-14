#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string word;
    vector<string> strs;

    while (cin >> word) {
        strs.push_back(word);
    }

    for (auto s : strs) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}

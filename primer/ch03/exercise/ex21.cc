#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <cctype>

using std::transform;
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::toupper;

int main() {
    string word;
    vector<string> words;
    while (cin >> word) {
        words.push_back(word);
    }

    for (auto it = words.begin(); it != words.end(); ++it) {
        string &word = *it;
        transform(word.begin(), word.end(), word.begin(),
                  [](unsigned char c) -> unsigned char { return toupper(c); });
    }

    decltype(words.size()) cnt = 0;
    for (auto it = words.begin(); it != words.end(); ++it) {
        cout << *it << " ";
        ++cnt;
        if (cnt % 8 == 0) {
            cout << endl;
        }
    }
    cout << endl;

    return 0;
}

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

    for (auto &word : words) {
        transform(word.begin(), word.end(), word.begin(),
                  [](unsigned char c) -> unsigned char { return toupper(c); });
    }

    decltype(words.size()) cnt = 0;
    for (auto word : words) {
        cout << word << " ";
        ++cnt;
        if (cnt % 8 == 0) {
            cout << endl;
        }
    }
    cout << endl;

    return 0;
}

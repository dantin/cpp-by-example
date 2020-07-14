#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <cctype>

using std::transform;
using std::vector;
using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::endl;
using std::toupper;

int main() {
    string line;
    vector<string> text;

    while (getline(cin, line)) {
        text.push_back(line);
    }

    for (auto it = text.begin();
            it != text.end() && !it->empty(); ++it) {
        string &line = *it;
        transform(line.begin(), line.end(), line.begin(),
                  [](unsigned char c) -> unsigned char { return toupper(c); });
    }

    for (auto it = text.cbegin(); it != text.cend(); ++it) {
        cout << *it << endl;
    }

    return 0;
}

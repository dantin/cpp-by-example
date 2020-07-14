#include <algorithm>
#include <string>
#include <iostream>
#include <cctype>

using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::endl;
using std::ispunct;
using std::transform;

int main() {
    string line;

    getline(cin, line);
    transform(line.begin(), line.end(), line.begin(), [](char ch) {
        if (ispunct(ch)) {
            return '\0';
        }
        return ch;
    });
    cout << line << endl;

    /*
    string buffer;

    buffer = "";
    for (auto c : line) {
        if (!ispunct(c)) {
            buffer += c;
        }
    }
    cout <<  buffer << endl;
    */

    return 0;
}

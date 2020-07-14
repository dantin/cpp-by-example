#include <string>
#include <iostream>

using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string line;

    // read input a line at a time and discard blank lines
    while (getline(cin, line)) {
        if (!line.empty()) {
            cout << line << endl;
        }
    }

    return 0;
}

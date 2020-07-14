#include <string>
#include <iostream>

using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string concat, line;

    while (getline(cin, line)) {
        concat += line;
    }

    cout << concat << endl;

    return 0;
}

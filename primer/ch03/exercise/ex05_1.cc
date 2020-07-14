#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string concat, word;

    while (cin >> word) {
        concat += word + " ";
    }
    auto found = concat.find_last_not_of(' ') + 1;
    concat.erase(found + 1);
    cout << concat << endl;

    return 0;
}

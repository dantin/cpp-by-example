#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main() {
    string str = "some string";

    cout << "original string: " << str << endl;
    for (auto &c : str) {
        c = '*';
    }
    cout << "changed string:  " << str << endl;

    return 0;
}

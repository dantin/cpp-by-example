#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main() {
    string str = "some string", orig = str;

    cout << "original string:  " << str << endl;

    decltype(str.size()) idx = 0;
    while (idx != str.size()) {
        str[idx] = '*';
        ++idx;
    }
    cout << "1st use while:    " << str << endl;

    str = orig;

    for (decltype(str.size()) idx = 0;
         idx != str.size(); ++idx) {
        str[idx] = '*';
    }
    cout << "2nd use for loop: " << str << endl;

    return 0;
}

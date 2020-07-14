#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string str1, str2;

    cout << " Input two strings: ";
    cin >> str1 >> str2;

    auto len1 = str1.size();
    auto len2 = str2.size();
    if (len1 == len2) {
        cout << "\"" << str1 << "\" and \"" << str2 << "\" have same length."
             << endl;
    } else if (len1 > len2) {
        cout << "\"" << str1 << "\" is longer." << endl;
    } else {
        cout << "\"" << str2 << "\" is longer." << endl;
    }

    return 0;
}

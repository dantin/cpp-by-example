#include <string>
#include <iostream>
#include <cstring>

using std::string;
using std::cout;
using std::endl;
using std::strcmp;

int main() {
    const char str1[] = "string 1";
    const char str2[] = "string 2";

    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    if (strcmp(str1, str2)) {
        cout << "str1 and str2 are NOT equal" << endl;
    } else {
        cout << "str1 and str2 are equal" << endl;
    }

    string s1(str1);
    string s2(str2);
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    if (s1 == s2) {
        cout << "s1 and s2 are equal" << endl;
    } else {
        cout << "s1 and s2 are NOT equal" << endl;
    }

    return 0;
}

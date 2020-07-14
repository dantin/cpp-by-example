#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main() {
    string s1 = "hello, ", s2 = "world\n";

    string s3 = s1 + s2;   // s3 is 'hello, world\n'
    cout << s1 << s2 << s3 << endl;

    s1 +=s2;               // equivalent to s1 = s1 + s2
    cout << s1 << endl;

    // no punctuation in s4 or s5
    string s4 = "hello", s5 = "world";
    string s6 = s4 + ", " + s5 + '\n';
    cout << s4 << s5 << "\n"
         << s6 << endl;

    return 0;
}

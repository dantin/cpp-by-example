#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main() {
    string str("some string"), orig = str;
    if (!str.empty()) {          // make sure there's a character to print
        cout << str[0] << endl;  // print the first character in str
    }

    if (!str.empty()) {  // make sure there's a character to print
        // assign a new value to the first character in str
        str[0] = toupper(str[0]);
    }
    cout << str << endl;

    str = orig;  // restore str to its original value

    // equivalent code using iterators instead of subscripts
    if (str.begin() != str.end()) {  // make sure str is not empty
        auto it = str.begin();       // it denotes the first character in str
        *it = toupper(*it);          // make that character uppercase
    }
    cout << str << endl;

    str = orig;  // restore str to its original value

    // four ways to capitalize first word in str:
    // 1. for loop with subscripts
    for (decltype(str.size()) index = 0;
            index != str.size() && !isspace(str[index]); ++index) {
        str[index] = toupper(str[index]);  // capitalize current character
    }
    cout << str << endl;

    str = orig;

    // 2. for loop with iterators instead of subscripts
    for (auto it = str.begin(); it != str.end() && !isspace(*it); ++it) {
        *it = toupper(*it);  // capitalize current character
    }
    cout << str << endl;

    str = orig;

    // 3. while instead of a for with subscripts
    decltype(str.size()) index = 0;  // subscripts to look at characters in str
    while (index != str.size() && !isspace(str[index])) {
        str[index] = toupper(str[index]);  // capitalize current character
        // advance the index to get the next character
        ++index;
    }
    cout << str << endl;

    str = orig;

    // 4. while loop with iterators
    auto beg = str.begin();
    while (beg != str.end() && !isspace(*beg)) {
        *beg = toupper(*beg);
        ++beg;
    }
    cout << str << endl;

    str = orig;

    // range for loop to process every character
    // first a loop to print the characters in str one character to a line
    for (auto c : str) {    // for every char in str
        cout << c << endl;  // print the current character followed by a newline
    }

    // next change every character in str
    for (auto &c : str) {  // note: c is a reference
        c = '*';           // assign a new value to the underlying char in str
    }
    cout << str << endl;

    str = orig;

    // equivalent code using traditional for loops
    // first print the characters in str
    for (decltype(str.size()) ix = 0; ix != str.size(); ++ix) {
        // print current character followed by a newline
        cout << str[ix] << endl;
    }
    // next change every character in str
    for (decltype(str.size()) ix = 0; ix != str.size(); ++ix) {
        str[ix] = '*';  // assign a new value to the character in str
    }
    cout << str << endl;

    str = orig;

    // equivalent code using traditional for loops and iterators
    // first print the characters in str
    for (auto beg = str.begin(); beg != str.end(); ++beg) {
        // print current character followed by a newline
        cout << *beg << endl;
    }
    // next change every character in str
    for (auto beg = str.begin(); beg != str.end(); ++beg) {
        *beg = '*';  // assign a new value to the character in str
    }
    cout << str << endl;

    return 0;
}

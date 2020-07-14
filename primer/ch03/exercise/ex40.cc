#include <cstring>
#include <iostream>

using std::strcpy;
using std::strcat;
using std::strlen;
using std::cout;
using std::endl;

int main() {
    const char s1[] = "Tom and ";
    const char s2[] = "Jerry";

    char *s = (char *) malloc(strlen(s1) + strlen(s2) + 1);  // NOLINT
    strcpy(s, s1);  // NOLINT
    strcat(s, s2);  // NOLINT

    cout << "s1:      " << s1 << endl;
    cout << "s2:      " << s2 << endl;
    cout << "s1 + s2: " << s << endl;

    return 0;
}

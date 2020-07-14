### Exercise 3

Whitespace characters are filtered out in string input operator, but they are retained in the
`getline` function.


### Exercise 7

The original string will be remain unchanged.

### Exercise 9

    string s;
    cout << s[0] << endl;

The program print the first character in string `s`, it is invalid, the program will failed when
`s` is an empty string.

### Exercise 11

    const string s = "Keep out!";
    for (auto &c : s) { /* ... */ }

It depends on the code within the loop body. E.g.,

    cout << c;  // legal.
    c = 'x';    // illegal.

The type of `c` is `const char &`.

### Exercise 12

    vector<vector<int>> ivec;         // legal, ivec is vector of int vector
    vector<string> svec = ivec;       // illegal, the type is different
    vector<string> svec(10, "null");  // illegal, string vector contains ten string, each string
                                      // has value "null"

### Exercise 13

    vector<int> v1;               // size: 0, no values.
    vector<int> v2(10);           // size: 10, value: 0
    vector<int> v3(10, 42);       // size: 10, value: 42
    vector<int> v4{10};           // size: 1, value: 10
    vector<int> v5{10, 42};       // size: 2, value: 10, 42
    vector<string> v6{10};        // size: 10, value: ""
    vector<string> v7{10, "hi"};  // size: 10, value: "hi"

### Exercise 18

    vector<int> ivec;
    ivec[0] = 42;

The program is illegal, the program will failed when `ivec` is an empty vector.

    vector<int> ivec;
    if (!ivec.empty()) {
        ivec[0] = 42;
    }

### Exercise 19

    vector<int> ivec1(10, 42);
    vector<int> ivec2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> ivec3;
    for (int i = 0; i < 10; ++i) {
        ivec3.push_back(42);
    }

### Exercise 26

`+` operator does not support add two iterators.

### Exercise 27

    unsigned buf_size = 1024;
    int ia[buf_size];             // illegal, buf_size is not a const
    int ia[4 * 7 - 14];           // legal
    int ia[txt_size()];           // illegal, txt_size is not a const function
    char st[11] = "fundamental";  // illegal, not enough space

### Exercise 28

    string sa[10];       // size: 10, value: ""
    int ia[10];          // size: 10, value: 0
    int main() {
        string sa2[10];  // size: 10, value: ""
        int    ia2[10];  // size: 10, value: undefine
    }

### Exercise 29

The size of an array must be defined at compile time, and can not dynamically change.

### Exercise 30

    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 1; ix <= array_size; ++ix) {
        ia[ix] = ix;
    }

On last loop, the ix will be `10`, which causes the overflow bugs.

### Exercise 33

    unsigned scores[11] = {};
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100) {
            ++scores[grade/10];
        }
    }

If we did not initialize the scores, the initial value in scores is undefined.

### Exercise 34

    p1 += p2 - p1;

The code make `p1` point to the same pointer which `p2` point to.

### Exercise 37

    const char ca[] = { 'h', 'e', 'l', 'l', 'o' };
    const char *cp = ca;
    while (*cp) {
        cout << *cp << endl;
        ++cp;
    }

Print character in `ca` one character per line. There is no _null_ at the end, so it is illegal.

### Exercise 38

The reason for this is that subtracting two pointers gives a logically explainable result - the
offset in memory between two pointers. Similarly, you can subtract or add an integral number
to/from a pointer, which means "move the pointer up or down".

Adding a pointer to a pointer is something which is hard to explain. What would the resulting
pointner represent?

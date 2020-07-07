### Exercise 1

- `short` and `int` is __at least__ 16 bits
- `long` is __at least__ 32 bits
- `long long` is __at least__ 64 bits
- `signed` represent positive numbers, negative numbers and zero
- `unsigned` only represent numbers no less than zero
- `float` is a IEEE __single-precision__ floating point number (binary32)
- `double` is a IEEE __double-precision__ floating point number (binary64)

### Exercise 2

Use `dobule`

### Exercise 4

omit

### Exercise 5

1. character literal, wide character literal, string literal, string wide character literal
2. int, unsigned int, long, unsigned long, octal int, hexadecimal int
3. double, float, long double
4. int, unsigned int, double, double

### Exercise 6

1. decimal int
2. `int month = 09` is invalid, `day` is octal int.

### Exercise 7

1. "Who goes with Fergus?\n", string literal
2. 31.4, long double
3. syntax error, int doesn't support `f` suffix
4. 3.14, long double

### Exercise 9

a. `std::cin >> int input_value;`

The error information is `error: expected primary-expression before ‘int’`.

    int input_value = 0;
    std::cin >> input_value;

b. `int i = { 3.14 };`

Error message: `error: narrowing conversion of ‘3.1400000000000001e+0’ from ‘double’ to ‘int’ inside { }`

    int i = 3.14;

c. `double salary = wage = 999.99;`

    double wage;
    double salary = wage = 999.99;

d. `double i = 3.14;`

    ok, but the value will be truncated.

### Exercise 10

`global_int` it a global variable, and have the value `0`; `global_str` is a global variable, and is an
empty string; `local_int` is a local variable which is uninitialized; `local_str` is a local variable but
is an empty string.

### Exercise 11

(a), (b) are definition; (c) is declaration.

### Exercise 12

(a), (c), (d) are invalid.

### Exercise 13

j is 100.


### Exercise 14

Legal, print `100 45`

### Exercise 15

a. valid.
b. invalid, initializer must be an object.
c. valid.
d. invalid, reference must be initialized.

### Exercise 16

a. valid, let d equal to `3.14159`.
b. valid, let d equal to `0.0D`, but automatic convert will happen.
c. valid, let i equal to `d`, but value will be truncated.
d. valid, let i equal to `d`, but value will be truncated.

### Exercise 17

Output:

    10 10

### Exercise 19

__Definition__:

- The pointer is "points to" an __object__.
- The reference is "another name" of an __object__.

__Key difference__:

1. A reference is another name of an _already existing_ object. A pointer is an object in its _own right_.
2. Once initialized, a reference remains _bound to_ its initial object. A pointer can be _assigned_ and
_copied_.
3. A reference must be initialized. A pointer need _not be_ initialized at the time when it is defined.
4. A reference always get the object to which it was initially bound. A pointer can point to _several
different objects_ over its life time.

### Exercise 20

`p1` point to `i`, the value of `i` is changed to `1764`.

### Exercise 21

(a), illegal, `&i` is type `int *`.

(b), illegal, `i` is `int`.

(c), legal.

### Exercise 22

`if (p)`, whether `p` is `nullptr`.

`if (*p)`, whether the value pointed by `p` is `0`.

### Exercise 23

No, we need more information to determine whether the pointer is valid or not.

### Exercise 24

`void *` can point to any type, but `int *` is forbiden to convert to `long *`.

### Exercise 25

a. `ip` is a pointer to int, `r` is a reference to int.
b. `i` is an int, `ip` is a pointer to int.
c. `ip` is a pointer to int, `ip2` is a int.

### Exercise 26

a. illegal, a const value must be initialized.
b. legal.
c. legal.
d. `++cnt` is legal, `++sz` is illegal as `sz` is a const value.

### Exercise 27

a. `i` is legal, `r` is illegal as `r` must refer to an object.
b. `p2` is legal.
c. both `i` and `r` are legal.
d. `p3` is legal.
e. `p1` is legal
f. `r2` is illegal, `r2` is a reference that cannot be const.
g. both `i2` and `r` are legal.

### Exercise 28

a. `i` is an integer, `cp` is a const pointer to integer. `cp` is illgal, it is not initialized.
b. `p1` is a pointer to integer, `p2` is a const pointer to integer. `p2` is illgal, it should be initialized.
c. `ic` is a const integer, `r` is a const reference to int. `ic` is illgal, it should be initialed.
d. `p3` is a const pointer to const integer, it is illgeal, as it should be initialized.
e. `p` is a pointer to const integer. It is legal.

### Exercise 29

a. legal, top-level const is ignored.
b. illegal, `p1` is pointer to int, but `p3` is const pointer to const int.
c. illegal, `p1` is pointer to int, but `&ic` is an address of const int.
d. illegal, we can not change a const object.
e. illegal, we can not change a const object.
f. illegal, we can not change a const object.

### Exercise 30

- `v2` is top-level const;
- `p2` is low-level const;
- `p3` is both top-level and low-level const;
- `r2` is low-level const;

### Exercise 31

    r1 = v2; // legal, top-level const in v2 is ignored.
    p1 = p2; // illegal, p2 has a low-level const, but p1 doesn't.
    p1 = p3; // illegal, p3 has a low-level const, but p1 doesn't.
    p2 = p1; // legal, int* can be converted to const int*.
    p2 = p3; // legal, p2 has the same low-level const qualification as p3.

### Exercise 32

illegal.

    int null = 0, *p = &null;
    int null = 0, *p = nullptr;

### Exercise 33

The variable context:

    int i = 0, &r = i;
    auto a = r;         // a is an int (r is an alias for i, which has type int)
    const int ci = i, &cr = ci;
    auto b = ci;        // b is an int (top-level const in ci is dropped)
    auto c = cr;        // c is an int (cr is an alias for ci whose const is top-level)
    auto d = &i;        // d is an int *(& of an int object is int *)
    auto e = &ci;       // e is const int *(& of a const object is low-level const)
    const auto f = ci;  // deduced type of ci is int; f has type const int
    auto &g = ci;       // g is a const int& that is bound to ci;
    auto &h = 42;       // error: can't bind a plain reference to a literal
    const auto &j = 42; // ok: can bind a const reference to a literal

The assignments:

    a = 42; // ok
    b = 42; // ok
    c = 42; // ok
    d = 42; // error: can't assign int to int *
    e = 42; // error: can't assign int to const int *
    g = 42; // error: can't bind a plain reference to a literal

### Exercise 35

    const int i = 42;
    auto j = i;                 // j is an int
    const auto &k = i;          // k is const int&
    auto *p = &i;               // p is const int*
    const auto j2 = i, &k2 = i; // j2 is const int, k2 is const int&

### Exercise 36

    int a = 3, b = 4;
    decltype(a) c = a;   // c is int
    decltype((b)) d = a; // d is int &
    ++c;  // c = 4;
    ++d;  // a = d = 4;

a = 4, b = 4, c = 4, d = 4

## Exercise 37

    int a = 3, b = 4;
    decltype(a) c = a;     // c is int
    decltype(a = b) d = a; // d is int &

a = 3, b = 4, c = 3, d = 3

### Exercise 38

The `decltype` handlers top-level const and references differs from the way `auto` does.

    int i = 0, &r = i;
    // same
    auto a = i;
    decltype(i) b = i;
    // different
    auto c = r;
    decltype(r) d = r;

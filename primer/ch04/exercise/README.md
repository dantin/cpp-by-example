### Exercise 1

`105`

### Exercise 2

    *(vec.begin())
    (*(vec.begin())) + 1

### Exercise 3

No. IMHO, does such design improve performance siginificantly? Actually, it can make bugs very
tricky to handle.

### Exercise 4

    12 / 3 * 4 + 5 * 15 + 24 % 4 / 2
    (((12 / 3) * 4) + (5 * 15)) + ((24 % 4) / 2)

### Exercise 5

    -30 * 3 + 21 / 5 // -90 + 4,  -83
    -30 + 3 * 21 / 5 // -30 + 12, -18
    30 / 3 * 21 % 5  // 210 % 5,    0
    -30 / 3 * 21 % 4 // -210 % 4,  -2

### Exercise 6

    i & 0x1

### Exercise 7

Overflow happens when a value is computed that is outside the range of values that the type can
represent.

    short svalue = 32767; ++svalue; // -32768
    unsigned uivalue = 0; --uivalue;  // 4294967295
    unsigned short usvalue = 65535; ++usvalue;  // 0

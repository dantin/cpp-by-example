#include <string>
#include <iostream>
#include <vector>

#include "Sales_item.h"

using std::string;
using std::cout;
using std::endl;
using std::vector;

int main() {
    // list initialization, articles has 3 elements.
    vector<string> articles = {"a", "an", "the"};

    vector<string> svec;  // default initializatio; svec has no elements.
    vector<int> ivec;     // ivec holds object of type int
    vector<Sales_item> sales_vec;

    vector<vector<string>> file;   // vector whose elements are vectors
    vector<vector<int>> vecOfvec;  // each element is itself a vector

    // all five vectors have size 0
    cout << svec.size() << " " << ivec.size() << " "
         << sales_vec.size() << " "
         << file.size() << " " << vecOfvec.size()
         << endl;

    vector<int> ivec2(10);           // size: 10, value: 0
    vector<int> ivec3(10, -1);       // size: 10, value: -1
    vector<string> svec2(10);        // size: 10, value: ""
    vector<string> svec3(10, "hi");  // size: 10, value: "hi"
    cout << ivec2.size() << " " << ivec3.size() << " "
         << svec2.size() << " " << svec3.size() << endl;

    vector<string> v1(10);        // size: 10, value: ""
    vector<string> v2{10};        // size: 10, value: ""
    vector<string> v3(10, "hi");  // size: 10, value: "hi"
    vector<string> v4{10, "hi"};  // size: 10, value: "hi"

    // all four vectors have size 10
    cout << v1.size() << " " << v2.size()
         << " " << v3.size() << " " << v4.size() << endl;

    vector<string> vs1{"hi"};  // list initialization, size: 1, value: "hi"
    vector<string> vs2{10};    // size: 10, value: ""
    vector<string> vs3{10, "hi"};  // size: 10, value: "hi"
    cout << vs1.size() << " " << vs2.size() << " " << vs3.size()
         << endl;

    vector<int> v5(10, 1);  // size: 10, value: 1
    vector<int> v6{10, 1};  // size: 2, value: 10, 1
    cout << v5.size() << " " << v6.size() << endl;

    vector<int> alt_v3 = {10};     // size: 1, value: 10
    vector<int> alt_v4 = {10, 1};  // size: 2, value: 10, 1
    cout << alt_v3.size() << " " << alt_v4.size() << endl;

    return 0;
}

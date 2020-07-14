#include <vector>
#include <iostream>
#include <cstddef>

using std::vector;
using std::cout;
using std::endl;
using std::size_t;

int main() {
    vector<int> ivec = { 1, 2, 3, 4 };

    int *ia = reinterpret_cast<int *>(malloc(ivec.size() * sizeof(int)));
    for (size_t i = 0; i < ivec.size(); ++i) {
        ia[i] = ivec[i];
    }

    cout << "ia: ";
    for (size_t i = 0; i < ivec.size(); ++i) {
        cout << ia[i] << " ";
    }
    cout << endl;

    free(ia);

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {10, 4, 7, 1};

    cout << "Recorrido del set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    return 0;
}

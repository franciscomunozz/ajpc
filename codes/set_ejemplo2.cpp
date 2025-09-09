#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40, 50};

    int query = 25;
    if (s.count(query))
        cout << query << " está en el set.\n";
    else
        cout << query << " NO está en el set.\n";

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;

    m["Chile"] = 56;
    m["Argentina"] = 44;
    m["Brasil"] = 213;

    cout << "Población de Chile: " << m["Chile"] << " millones\n";

    cout << "Recorriendo el mapa:\n";
    for (auto par : m) {
        cout << par.first << " -> " << par.second << "\n";
    }

    return 0;
}

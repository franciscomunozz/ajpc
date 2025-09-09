#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;

    // Insertar elementos
    s.insert(5);
    s.insert(2);
    s.insert(8);
    s.insert(5); // No se inserta porque ya está

    cout << "Elementos en el set: ";
    for (int x : s) cout << x << " ";
    cout << "\n";

    return 0;
}

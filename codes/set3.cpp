#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {1, 2, 3, 4, 5};

    cout << "Set inicial: ";
    for (int x : s) cout << x << " ";
    cout << "\n";

    s.erase(3); // Eliminar elemento 3
    cout << "Después de eliminar 3: ";
    for (int x : s) cout << x << " ";
    cout << "\n";

    int num = 4;
    if (s.find(num) != s.end())
        cout << num << " está en el set.\n";
    else
        cout << num << " NO está en el set.\n";

    return 0;
}

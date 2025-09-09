#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;
    m["Ana"] = 15;
    m["Luis"] = 17;
    m["Sofia"] = 19;

    cout << "Mapa inicial:\n";
    for (auto par : m) cout << par.first << " -> " << par.second << "\n";

    m.erase("Luis");

    cout << "\nDespués de borrar a Luis:\n";
    for (auto par : m) cout << par.first << " -> " << par.second << "\n";

    string nombre = "Sofia";
    if (m.find(nombre) != m.end())
        cout << nombre << " está en el mapa.\n";
    else
        cout << nombre << " no está en el mapa.\n";

    return 0;
}

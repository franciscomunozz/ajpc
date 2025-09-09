#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, string> agenda;

    agenda["Carlos"] = "987654321";
    agenda["Ana"] = "912345678";
    agenda["Luis"] = "956789123";

    cout << "Teléfono de Ana: " << agenda["Ana"] << "\n";

    cout << "Agenda completa:\n";
    for (auto par : agenda) {
        cout << par.first << " -> " << par.second << "\n";
    }

    return 0;
}
    
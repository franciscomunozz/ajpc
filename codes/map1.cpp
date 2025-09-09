#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> edad;

    // Insertar pares clave-valor
    edad["Juan"] = 20;
    edad["Maria"] = 18;
    edad["Pedro"] = 22;

    cout << "Edad de Maria: " << edad["Maria"] << "\n";

    return 0;
}

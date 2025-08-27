#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<string> cola;

    // Insertamos elementos
    cola.push("Ana");
    cola.push("Juan");
    cola.push("Pedro");

    cout << "Primero en la cola: " << cola.front() << "\n"; // Ana
    cout << "Ultimo en la cola: " << cola.back() << "\n";  // Pedro

    // Atendemos personas
    while (!cola.empty()) {
        cout << "Atendiendo a: " << cola.front() << "\n";
        cola.pop();
    }

    return 0;
}

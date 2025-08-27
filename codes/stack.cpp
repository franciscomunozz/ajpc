#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> pila;

    // Insertamos elementos
    pila.push(10);
    pila.push(20);
    pila.push(30);

    cout << "Elemento en la cima: " << pila.top() << "\n"; // 30

    // Quitamos elementos
    pila.pop();
    cout << "Nueva cima: " << pila.top() << "\n"; // 20

    // Vaciamos la pila
    while (!pila.empty()) {
        cout << pila.top() << " ";
        pila.pop();
    }
    cout << "\n";

    return 0;
}

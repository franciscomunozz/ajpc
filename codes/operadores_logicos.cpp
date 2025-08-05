#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    // Operadores aritméticos
    cout << "Suma: " << a + b << endl;
    cout << "Multiplicación: " << a * b << endl;

    // Operadores de comparación
    cout << "¿a es igual a b? " << (a == b) << endl;
    cout << "¿a es menor que b? " << (a < b) << endl;

    // Operadores lógicos
    bool resultado1 = (a < b) && (a > 0);  // ambas condiciones son verdaderas
    bool resultado2 = (a > b) || (a == 5); // una condición es verdadera
    bool resultado3 = !(a == b);           // true si a no es igual a b

    cout << "Resultado1 (a < b && a > 0): " << resultado1 << endl;
    cout << "Resultado2 (a > b || a == 5): " << resultado2 << endl;
    cout << "Resultado3 (!(a == b)): " << resultado3 << endl;

    return 0;
}

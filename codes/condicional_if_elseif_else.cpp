#include <iostream>
using namespace std;

int main() {
    int nota;
    cout << "Ingresa tu nota (0-100): ";
    cin >> nota;

    if (nota >= 90) {
        cout << "Excelente" << endl;
    } else if (nota >= 70) {
        cout << "Aprobado" << endl;
    } else {
        cout << "Reprobado" << endl;
    }

    return 0;
}

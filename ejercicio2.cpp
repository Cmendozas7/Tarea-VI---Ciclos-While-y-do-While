//
// Created by carlos mendoza on 30/03/2026.
//

#include <iostream>
using namespace std;

int main() {
    double monto, total = 0;
    int contadorCompras = 0;
    int mayoresIgual100 = 0;
    int menores100 = 0;

    // Cambie el nombre por el suyo
    cout << "Nombre del estudiante: Carlos Mendoza" << endl;

    cout << "\nIngrese el monto de cada compra (0 para finalizar): " << endl;

    while (true) {
        cout << "Monto: ";
        cin >> monto;

        if (monto == 0) {
            break;
        }

        if (monto < 0) {
            cout << "Monto invalido. Intente nuevamente." << endl;
            continue;
        }

        total += monto;
        contadorCompras++;

        if (monto >= 100) {
            mayoresIgual100++;
        } else {
            menores100++;
        }
    }

    if (contadorCompras == 0) {
        cout << "\nNo se ingresaron compras validas." << endl;
    } else {
        cout << "\nTotal acumulado: Q" << total << endl;
        cout << "Cantidad de compras: " << contadorCompras << endl;
        cout << "Promedio de compra: Q" << (total / contadorCompras) << endl;
        cout << "Compras mayores o iguales a Q100: " << mayoresIgual100 << endl;
        cout << "Compras menores a Q100: " << menores100 << endl;
    }

    return 0;
}
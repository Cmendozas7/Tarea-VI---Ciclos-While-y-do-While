//
// Created by Carlos Mendoza on 30/03/2026.
//

#include <iostream>
using namespace std;

int main() {
    double saldo = 500;
    int opcion;
    double monto;

    // Cambie el nombre por el suyo
    cout << "Nombre del estudiante: Carlos Mendoza" << endl;

    do {
        cout << "\n--- CAJERO AUTOMATICO ---" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Depositar dinero" << endl;
        cout << "3. Retirar dinero" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Saldo actual: Q" << saldo << endl;
                break;

            case 2:
                cout << "Ingrese monto a depositar: ";
                cin >> monto;

                if (monto > 0) {
                    saldo += monto;
                    cout << "Deposito realizado correctamente." << endl;
                } else {
                    cout << "Monto invalido." << endl;
                }
                break;

            case 3:
                cout << "Ingrese monto a retirar: ";
                cin >> monto;

                if (monto <= 0) {
                    cout << "Monto invalido." << endl;
                } else if (monto > saldo) {
                    cout << "Fondos insuficientes." << endl;
                } else {
                    saldo -= monto;
                    cout << "Retiro realizado correctamente." << endl;
                }
                break;

            case 4:
                cout << "Gracias por usar el sistema." << endl;
                break;

            default:
                cout << "Opcion invalida." << endl;
        }

    } while (opcion != 4);

    return 0;
}
//
// Created by carlos Mendoza on 30/03/2026.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuario;
    int password;
    int intentosFallidos = 0;

    // Cambie el nombre por el suyo
    cout << "Nombre del estudiante: Carlos Mendoza" << endl;

    while (usuario != "admin" || password != 2026) {
        cout << "\nIngrese usuario: ";
        cin >> usuario;

        cout << "Ingrese contraseña: ";
        cin >> password;

        if (usuario != "admin" || password != 2026) {
            cout << "Datos incorrectos." << endl;
            intentosFallidos++;
        }
    }

    cout << "\nBienvenido al sistema." << endl;
    cout << "Acceso concedido." << endl;
    cout << "Intentos incorrectos: " << intentosFallidos << endl;

    return 0;
}
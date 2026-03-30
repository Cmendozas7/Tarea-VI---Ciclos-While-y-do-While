//
// Created by carlos mendoza on 30/03/2026.
//
#include <iostream>
using namespace std;

int main() {
    int opcion;
    int malo = 0, regular = 0, bueno = 0, excelente = 0;
    int totalRespuestas = 0;

    // Cambie el nombre por el suyo
    cout << "Nombre del estudiante: Carlos Mendoza" << endl;

    do {
        cout << "\nIngrese calificacion (1=Malo, 2=Regular, 3=Bueno, 4=Excelente, 0=Salir): ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                malo++;
                totalRespuestas++;
                break;

            case 2:
                regular++;
                totalRespuestas++;
                break;

            case 3:
                bueno++;
                totalRespuestas++;
                break;

            case 4:
                excelente++;
                totalRespuestas++;
                break;

            case 0:
                break;

            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
        }

    } while (opcion != 0);

    if (totalRespuestas == 0) {
        cout << "\nNo se ingresaron respuestas validas." << endl;
    } else {
        cout << "\nTotal de respuestas: " << totalRespuestas << endl;
        cout << "Malo: " << malo << endl;
        cout << "Regular: " << regular << endl;
        cout << "Bueno: " << bueno << endl;
        cout << "Excelente: " << excelente << endl;
    }

    return 0;
}
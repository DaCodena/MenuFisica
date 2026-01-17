#include <iostream>
#include "Distancia.h"
#include "Velocidad.h"
#include "Tiempo.h"

int main() {
    int opcion;

    do {
        std::cout << "\n--- MENU DE FISICA ---\n";
        std::cout << "1. Calcular distancia\n";
        std::cout << "2. Calcular velocidad\n";
        std::cout << "3. Calcular tiempo\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
        case 1: {
            Distancia d;
            d.calcular();
            break;
        }
        case 2: {
            Velocidad v;
            v.calcular();
            break;
        }
        case 3: {
            Tiempo t;
            t.calcular();
            break;
        }
        case 4:
            std::cout << "Saliendo del programa...\n";
            break;
        default:
            std::cout << "Opcion invalida.\n";
        }

    } while (opcion != 4);

    return 0;
}

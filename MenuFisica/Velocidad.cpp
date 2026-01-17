#include "Velocidad.h"
#include <iostream>

void Velocidad::calcular() {
    float distancia, tiempo;

    std::cout << "Ingrese la distancia: ";
    std::cin >> distancia;

    std::cout << "Ingrese el tiempo: ";
    std::cin >> tiempo;

    if (tiempo != 0) {
        std::cout << "La velocidad es: " << distancia / tiempo << std::endl;
    }
    else {
        std::cout << "Error: el tiempo no puede ser cero." << std::endl;
    }
}
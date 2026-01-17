#include "Tiempo.h"
#include <iostream>

void Tiempo::calcular() {
    float distancia, velocidad;

    std::cout << "Ingrese la distancia: ";
    std::cin >> distancia;

    std::cout << "Ingrese la velocidad: ";
    std::cin >> velocidad;

    if (velocidad != 0) {
        std::cout << "El tiempo es: " << distancia / velocidad << std::endl;
    }
    else {
        std::cout << "Error: la velocidad no puede ser cero." << std::endl;
    }
}
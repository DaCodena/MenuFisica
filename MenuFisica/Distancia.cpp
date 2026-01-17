#include "Distancia.h"
#include <iostream>

void Distancia::calcular() {
    float velocidad, tiempo;

    std::cout << "Ingrese la velocidad: ";
    std::cin >> velocidad;

    std::cout << "Ingrese el tiempo: ";
    std::cin >> tiempo;

    std::cout << "La distancia es: " << velocidad * tiempo << std::endl;
}
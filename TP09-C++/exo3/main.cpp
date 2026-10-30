#include "Hybride.hpp"
#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    std::cout << "= Test du Vehicule Hybride (Heritage Virtuel / Resolution du Diamant) =" << std::endl;

    Hybride monVehicule("Toyota", "Prius", 4.5, 60.0);

    monVehicule.afficherCaracteristiques();

    return 0;
}

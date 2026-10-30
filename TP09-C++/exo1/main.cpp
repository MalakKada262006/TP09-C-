#include "EnseignantChercheur.hpp"
#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    std::cout << "=== Test de l heritage multiple : EnseignantChercheur ===" << std::endl;

    EnseignantChercheur ec("El Amrani", "Youssef", "Intelligence Artificielle", "Genie Informatique");

    std::cout << "Informations de l enseignant-chercheur :" << std::endl;
    ec.afficher();

    return 0;
}

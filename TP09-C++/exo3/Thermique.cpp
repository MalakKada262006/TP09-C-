#include "Thermique.hpp"
#include <iostream>

Thermique::Thermique(const std::string& marque, const std::string& modele, double conso)
    : Vehicule(marque, modele), consommationCarburant(conso) {}

void Thermique::afficherCaracteristiques() const {
    Vehicule::afficherCaracteristiques();
    std::cout << " | Consommation : " << consommationCarburant << " L/100km";
}

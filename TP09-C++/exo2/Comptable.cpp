#include "Comptable.hpp"
#include <iostream>

Comptable::Comptable(double salaire) : salaireComptable(salaire) {}

void Comptable::afficherSalaire() const {
    std::cout << "Salaire (Comptable) : " << salaireComptable << " €" << std::endl;
}

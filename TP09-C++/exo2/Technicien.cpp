#include "Technicien.hpp"
#include <iostream>

Technicien::Technicien(double salaire) : salaireTechnicien(salaire) {}

void Technicien::afficherSalaire() const {
    std::cout << "Salaire (Technicien) : " << salaireTechnicien << " €" << std::endl;
}

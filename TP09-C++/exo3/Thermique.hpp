#ifndef THERMIQUE_HPP
#define THERMIQUE_HPP

#include "Vehicule.hpp"

class Thermique : public virtual Vehicule {
protected:
    double consommationCarburant;

public:
    Thermique(const std::string& marque, const std::string& modele, double conso);
    virtual ~Thermique() = default;

    void afficherCaracteristiques() const override;
};

#endif

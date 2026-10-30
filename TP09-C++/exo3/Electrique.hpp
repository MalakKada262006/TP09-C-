#ifndef ELECTRIQUE_HPP
#define ELECTRIQUE_HPP

#include "Vehicule.hpp"

class Electrique : public virtual Vehicule {
protected:
    double autonomieBatterie;

public:
    Electrique(const std::string& marque, const std::string& modele, double autonomie);
    virtual ~Electrique() = default;

    void afficherCaracteristiques() const override;
};

#endif

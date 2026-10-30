#ifndef COMPTABLE_HPP
#define COMPTABLE_HPP

class Comptable {
protected:
    double salaireComptable;

public:
    Comptable(double salaire);
    virtual ~Comptable() = default;
    virtual void afficherSalaire() const;
};

#endif

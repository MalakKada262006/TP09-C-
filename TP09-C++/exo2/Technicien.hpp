#ifndef TECHNICIEN_HPP
#define TECHNICIEN_HPP

class Technicien {
protected:
    double salaireTechnicien;

public:
    Technicien(double salaire);
    virtual ~Technicien() = default;
    virtual void afficherSalaire() const;
};

#endif

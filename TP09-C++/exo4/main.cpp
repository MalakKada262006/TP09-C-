#include "SuperUtilisateur.hpp"
#include <iostream>
#include <vector>
#include <memory>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    std::vector<std::unique_ptr<SuperUtilisateur>> listeSuperUsers;
    int choix = 0;

    do {
        std::cout << "   MENU - GESTION DES SUPER UTILISATEURS  " << std::endl;
        std::cout << "1. Creer et tester un SuperUtilisateur" << std::endl;
        std::cout << "2. Afficher tous les SuperUtilisateurs" << std::endl;
        std::cout << "3. Quitter" << std::endl;
        std::cout << "Votre choix : ";
        std::cin >> choix;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            choix = 0;
            std::cout << "Entree invalide. Veuillez reessayer." << std::endl;
            continue;
        }

        switch (choix) {
            case 1: {
                int id, droits, mod;
                std::string login;

                std::cout << "Entrez l ID de l utilisateur : ";
                std::cin >> id;
                std::cout << "Entrez le login : ";
                std::cin >> login;
                std::cout << "Entrez le niveau de droits d acces (Admin) : ";
                std::cin >> droits;
                std::cout << "Entrez le niveau de moderation (Moderateur) : ";
                std::cin >> mod;

                auto superUser = std::make_unique<SuperUtilisateur>(id, login, droits, mod);

                std::cout << "\n[Succes] SuperUtilisateur cree avec succes !" << std::endl;
                superUser->afficherInfos();

                superUser->gererSysteme();
                superUser->modererContenu();

                listeSuperUsers.push_back(std::move(superUser));
                break;
            }
            case 2: {
                if (listeSuperUsers.empty()) {
                    std::cout << "\nAucun SuperUtilisateur enregistre pour le moment." << std::endl;
                } else {
                    std::cout << "\n--- Liste des SuperUtilisateurs (" << listeSuperUsers.size() << ") ---" << std::endl;
                    for (size_t i = 0; i < listeSuperUsers.size(); ++i) {
                        std::cout << "Utilisateur #" << (i + 1) << " : ";
                        listeSuperUsers[i]->afficherInfos();
                    }
                }
                break;
            }
            case 3:
                std::cout << "\nFermeture du programme. Au revoir !" << std::endl;
                break;
            default:
                std::cout << "\nOption invalide, veuillez choisir entre 1 et 3." << std::endl;
        }

    } while (choix != 3);

    return 0;
}

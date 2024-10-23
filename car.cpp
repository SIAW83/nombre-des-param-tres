#include <iostream>
#include <string>

class Voiture {
private:
    std::string marque;
    std::string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:
    Voiture() : marque("Inconnue"), modele("Inconnu"), annee(0), kilometrage(0.0), vitesse(0.0) {}

    Voiture(std::string m, std::string mod, int a, float km, float v)
        : marque(m), modele(mod), annee(a), kilometrage(km), vitesse(v) {}

    void accelerer(float valeur) {
        vitesse += valeur;
    }

    void freiner(float valeur) {
        if (vitesse - valeur < 0) {
            vitesse = 0;
        } else {
            vitesse -= valeur;
        }
    }

    void afficherInfo() const {
        std::cout << "Marque : " << marque << std::endl;
        std::cout << "Modèle : " << modele << std::endl;
        std::cout << "Année : " << annee << std::endl;
        std::cout << "Kilométrage : " << kilometrage << " km" << std::endl;
        std::cout << "Vitesse : " << vitesse << " km/h" << std::endl;
    }


    void avancer(float distance) {
        kilometrage += distance;
    }


    ~Voiture() {
        std::cout << "La voiture " << marque << " " << modele << " est détruite." << std::endl;
    }
};

int main() {

    Voiture voiture1;
    voiture1.afficherInfo();

    std::cout << "\n";

    Voiture voiture2("mercedece", "Amg", 2023,200000, 200);
    voiture2.afficherInfo();

    std::cout << "\n";

    voiture2.accelerer(30);
    voiture2.afficherInfo();

    std::cout << "\n";

    voiture2.freiner(60);
    voiture2.afficherInfo();

    std::cout << "\n";


    voiture2.avancer(110);
    voiture2.afficherInfo();

    return 0;
}

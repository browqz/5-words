#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>

using namespace std;

string ChoixAleatoire(const vector<string>& mots) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, mots.size() - 1);
    
    int Mot = dis(gen);
    return mots[Mot];
}

void jouerJeu() {
    vector<string> mots = {"linux", "ubuntu", "python", "sexuel", "sanitaire"};
    random_device rd;
    shuffle(mots.begin(), mots.end(), rd);
    
    string motChoisi = ChoixAleatoire(mots);
    
    cout << "Jouons au jeu 5 mots, je t'explique les regles." << endl;
    cout << "Un seul parmis les 5 mots suivants et valide." << endl;
    cout << "Voici la liste des 5 mots : linux, ubuntu, python, sexuel et sanitaire." << endl;
    cout << "Essaye de deviner lequel est valide !" << endl;
    
    string proposition;
    while (true) {
        cout << "Propose un mot : ";
        cin >> proposition;
        
        if (proposition == motChoisi) {
            cout << "Bravo ! Tu as trouve le bon Mot" << endl;
            break;
        } else {
            cout << "Erreur, ce n'est pas le bon mot" << endl;
        }
    }
}

int main() {
    jouerJeu();
    return 0;
}
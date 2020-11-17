#include <iostream>
#include <string>
#include "FonctionsMenus2090633.h"
using namespace std;

void afficherMenu1() // Fonction pour afficher le premier menu.
{
	system("pause"); // Le programme demande a l'utilisateur si il veut continuer lorsque le menu1 est affiché pour la première fois.
	system("cls"); // Le programme éfface tous avant le menu 1.
	// Le programme affiche le menu
	cout << "Choisissez la forme : " << endl;
	cout << "1. Rectangle" << endl;
	cout << "2. Triangle" << endl;
	cout << "3. Carré" << endl;
	cout << "4. Losange" << endl;
	cout << "5. Quitter" << endl;
}

void afficherMenu2() // Fonction pour afficher le premier menu.
{
	// Le programme affiche le menu.
	cout << "Choisissez le remplissage : " << endl;
	cout << "1. Forme pleine" << endl;
	cout << "2. Forme vide" << endl;
	cout << "3. Retour au menu précédent" << endl;
}

int validerMenu(int menu, int max) // Fonction pour valider si le choix pris par l'utilisateur est un choix dans le menu.
{
	// Déclaration des variables.
	string clavier; // Variable pour le choix pris par l'utilisateur.

	if (menu == 1) // Si le menu est le menu 1.
	{
		afficherMenu1(); // Le programme appelle la fonction pour afficher le menu 1.
		cout << "Votre choix --> "; // Le programme demande à l'utilisateur d'entrer son choix.
		getline(cin, clavier, '\n'); // L'utilisateur entre son choix.

		// Le programme doit vérifier que le choix fait par l'utilisateur est un choix correct.
		// Le choix doit être compris entre les options du menu. L'utilisateur peut se tromper plusieurs fois => boucle.
		while ((clavier.empty() || ((clavier.front() < '0' || clavier.front() > '5')
			&& (clavier.length() <= 1 || clavier.front() != '-' || clavier.at(1) < '0' || clavier.at(1) > '5'))))
		{
			cout << "Erreur : Vous devez entrer un choix compris dans le menu." << endl; // Le programme affiche un message d'erreur.

			afficherMenu1(); // Le programme appelle la fonction pour afficher le premier menu.
			// le programme demande le choix de l'utilisateur.
			cout << "Votre choix --> ";
			getline(cin, clavier, '\n');	// L'utilisateur entre son choix.
		} // Fin de la boucle.

	}
	if (menu == 2) // Si le menu est le menu 2.
	{
	    afficherMenu2(); // Le programme appelle la fonction pour afficher le menu 2.
		cout << "Votre choix --> "; // Le programme demande à l'utilisateur d'entrer son choix.
		getline(cin, clavier, '\n'); // L'utilisateur entre son choix.

		// Le programme doit vérifier que le choix fait par l'utilisateur est un choix correct.
		// Le choix doit être compris entre les options du menu. L'utilisateur peut se tromper plusieurs fois => boucle.
		while ((clavier.empty() || ((clavier.front() < '0' || clavier.front() > '3')
			&& (clavier.length() <= 1 || clavier.front() != '-' || clavier.at(1) < '0' || clavier.at(1) > '3'))))
		{
			cout << "Erreur : Vous devez entrer un choix compris dans le menu." << endl; // Le programme affiche un message d'erreur.

			// A LA FIN de la boucle, la variable de boucle, doit être réinitialisée.
			afficherMenu2();  // Le programme appelle la fonction pour afficher le premier menu.
			// le programme demande le choix de l'utilisateur.
			cout << "Votre choix --> ";
			getline(cin, clavier, '\n'); // L'utilisateur entre son choix.
		}
	}

	return stoi(clavier); // Le programme retourne le choix de l'utilisateur pour le programme principal.
	
}
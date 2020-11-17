#include <iostream>
#include <string>
#include "FonctionsFormes2090633.h"

using namespace std;

// -------= !! Generer Nombre Aléatoire !! =-------

int genererNombreAleatoire()	// Fonction qui retourne un nombre aléatoire compris entre min et max passés en paramètre.
{
	// Déclaration des variables constantes.
	const int max = 4;		// La valeur maximale que le nombre aléatoire peut avoir.
	const int min = 1;		// La valeur minimale que le nombre aléatoire peut avoir.

	return rand() % (max - min + 1) + (max - min);		// Le programme retourne le nombre aléatoire pour les fonctions qui vont l'utiliser.
}

// -------= !! Traiter Rectangle !! =-------

int traiterRectangle(int choix)		// Fonction demandant les dimensions de la forme, affichent la phrase de présentation de la forme avec les bonnes dimensions et finalement appellent la fonction dessinant la forme.
{
	// Déclaration des variables constantes.
	const int max = 200;		// La valeur maximale qu'une contrainte peut avoir (il est impossible d'afficher une forme en plein écran après 200).
	const int min = 0;			// La valeur minimale qu'une contrainte peut avoir.
	// Déclaration des variables.
	int hauteur;				// La hauteur que l'utilisateur va choisir pour la forme.
	int largeur;				// La largeur que l'utilisateur va choisir pour la forme.
	// Déclaration des strings.
	const string forme = "rectangle";	// Variable string constant pour rendre les modifications au programme plus facile.
	string remplissage;			// Variable string qui affiche a l'utilisateur si la forme est pleine ou vide.


	if (choix == 1)				// Si le choix du remplissage est 1 (plein), la variable remplissage va afficher "plein".
	{
		remplissage = "plein";	// Le programme donne la variable remplissage le string "plein".
	}
	else                        // Si le choix du remplissage n'est pas 1 (plein), la variable remplissage va afficher "vide".
	{
		remplissage = "vide";	// Le programme donne la variable remplissage le string "vide".
	} // Fin du if/else


	cout << "Entrez la hauteur du " << forme << " : ";	 // Le programme demande a l'utilisateur d'entrer la contrainte d'hauteur pour la forme.
	cin >> hauteur;				// L'utilisateur entre son entier.


	while (hauteur <= min || hauteur > max)	// Si l'utilisateur entre un entier qui ne respecte pas les contraintes, le programme re-demande un entier.
	{
		cout << "Erreur : Vous devez entrer un entier qui est positif, qui respecte les contraintes de la forme, et qui est entre 1 et 200." << endl;	// Le programme affiche un message d'erreur.

		// le programme re-demande le choix de l'utilisateur.
		cout << "Entrez la hauteur du " << forme << " : ";
		cin >> hauteur;			// L'utilisateur entre son entier.
	} // Fin de la boucle while.


	cout << "Entrez la largeur du " << forme << " : ";	 // Le programme demande a l'utilisateur d'entrer la contrainte de largeur pour la forme.
	cin >> largeur;				// L'utilisateur entre son entier.


	while (largeur <= min || largeur > max) // Si l'utilisateur entre un entier qui ne respecte pas les contraintes, le programme re-demande un entier.
	{
		cout << "Erreur : Vous devez entrer un entier qui est positif, qui respecte les contraintes de la forme, et qui est entre 1 et 200." << endl; // Le programme affiche un message d'erreur.

		// le programme demande le choix de l'utilisateur.
		cout << "Entrez la largeur du " << forme << " : ";
		cin >> largeur;			// L'utilisateur entre son entier.
	} // Fin de la boucle while.


	cout << "Voici votre " << forme << " " << remplissage << " de " << hauteur << "x" << largeur << " : " << endl; // Le programme affiche a l'utilisateur les contraintes qu'il a choisi.
	dessinerRectangle(choix, hauteur, largeur);	// Le programme appele la fonction dessinerRectangle pour afficher le rectangle que l'utilisateur a créé.

	return 0;
}

// -------= !! Traiter Carré !! =-------

int traiterCarre(int choix)		// Fonction qui demande les dimensions de la forme, affiche la phrase de présentation de la forme avec les bonnes dimensions et finalement appelle la fonction dessinant la forme.
{
	// Déclaration des variables constantes
	const int max = 200;		// La valeur maximale qu'une contrainte peut avoir (il est impossible d'afficher une forme en plein écran après 200).
	const int min = 0;			// La valeur minimale qu'une contrainte peut avoir.
	// Déclaration des variables.
	int hauteur;				// La hauteur que l'utilisateur va choisir pour la forme.
	int largeur;				// La largeur que l'utilisateur va choisir pour la forme.
	// Déclaration des strings.
	const string forme = "carré";	// Variable string constant pour rendre les modifications au programme plus facile.
	string remplissage;			// Variable string qui affiche a l'utilisateur si la forme est pleine ou vide..

	if (choix == 1)				// Si le choix du remplissage est 1 (plein), la variable remplissage va afficher "plein".
	{
		remplissage = "plein";	// Le programme donne la variable remplissage le string "plein".
	}
	else                        // Si le choix du remplissage n'est pas 1 (plein), la variable remplissage va afficher "vide".
	{
		remplissage = "vide";	// Le programme donne la variable remplissage le string "vide".
	} // Fin du if/else


	cout << "Entrez la hauteur du " << forme << " : ";	 // Le programme demande a l'utilisateur d'entrer la contrainte d'hauteur pour la forme.
	cin >> hauteur;				// L'utilisateur entre son entier.


	while (hauteur <= min || hauteur > max)	// Si l'utilisateur entre un entier qui ne respecte pas les contraintes, le programme re-demande un entier.
	{
		cout << "Erreur : Vous devez entrer un entier qui est positif, qui respecte les contraintes de la forme, et qui est entre 1 et 200." << endl;	// Le programme affiche un message d'erreur.

		// le programme re-demande le choix de l'utilisateur.
		cout << "Entrez la hauteur du " << forme << " : ";
		cin >> hauteur;			// L'utilisateur entre son entier.
	} // Fin de la boucle while.


	cout << "Entrez la largeur du " << forme << " : ";	 // Le programme demande a l'utilisateur d'entrer la contrainte de largeur pour la forme. 
	cin >> largeur;				// L'utilisateur entre son entier.


	while (largeur != hauteur || largeur <= min || largeur > max)
	{
		cout << "Erreur : Vous devez entrer un entier qui est positif, qui respecte les contraintes de la forme (la hauteur et largeur d'un carré doit être parreil), et qui est entre 1 et 200." << endl; // Le programme affiche un message d'erreur.

		// le programme demande le choix de l'utilisateur.
		cout << "Entrez la largeur du " << forme << " : ";
		cin >> largeur;			// L'utilisateur entre son entier.
	} // Fin de la boucle while.

	cout << "Voici votre " << forme << " " << remplissage << " de " << hauteur << "x" << largeur << " : " << endl; // Le programme affiche a l'utilisateur les contraintes qu'il a choisi.
	dessinerRectangle(choix, hauteur, largeur); // Le programme appele la fonction dessinerRectangle pour afficher le carré que l'utilisateur a créé.

	return 0;
}

// -------= !! Traiter Triangle !! =-------

int traiterTriangle(int choix)		// Fonction demandant les dimensions de la forme, affichent la phrase de présentation de la forme avec les bonnes dimensions et finalement appellent la fonction dessinant la forme.
{
	// Déclaration des variables constantes
	const int max = 200;		// La valeur maximale qu'une contrainte peut avoir (il est impossible d'afficher une forme en plein écran après 200).
	const int min = 0;			// La valeur minimale qu'une contrainte peut avoir.
	// Déclaration des variables
	int hauteur;				// La hauteur que l'utilisateur va choisir pour la forme.
	int aleatoire = genererNombreAleatoire();	// La valeur du nombre aléatoire determiné par la fonction genererNombreAleatoire() pour déterminer de quelle façon le triangle va s'afficher.
	// Déclaration des strings
	const string forme = "triangle";	// Variable string constant pour rendre les modifications au programme plus facile.
	string remplissage;			// Variable string qui affiche a l'utilisateur si la forme est pleine ou vide.

	if (choix == 1)				// Si le choix du remplissage est 1 (plein), la variable remplissage va afficher "plein".
	{
		remplissage = "plein";	// Le programme donne la variable remplissage le string "plein".
	}
	else                        // Si le choix du remplissage n'est pas 1 (plein), la variable remplissage va afficher "vide".
	{
		remplissage = "vide";	// Le programme donne la variable remplissage le string "vide".
	} // Fin du if/else.

	cout << "Entrez la hauteur du " << forme << " : ";	 // Le programme demande a l'utilisateur d'entrer la contrainte d'hauteur pour la forme. 
	cin >> hauteur;				// L'utilisateur entre son entier.

	while (hauteur <= min || hauteur > max)	// Si l'utilisateur entre un entier qui ne respecte pas les contraintes, le programme re-demande un entier.
	{
		cout << "Erreur : Vous devez entrer un entier qui est positif, qui respecte les contraintes de la forme, et qui est entre 1 et 200." << endl;	// Le programme affiche un message d'erreur.

		// le programme re-demande le choix de l'utilisateur.
		cout << "Entrez la hauteur du " << forme << " : ";
		cin >> hauteur;			// L'utilisateur entre son entier.
	} // Fin de la boucle while.

	cout << "Voici votre " << forme << " " << remplissage << " de hauteur " << hauteur << " : " << endl; // Le programme affiche a l'utilisateur les contraintes qu'il a choisi.

	// Le programme affiche à l'utilisateur le triangle qu'il a créé avec une position déterminé par la fonction genererNombreAleatoire().
	if (aleatoire == 1)			// Si le nombre aléatoire est 1, le triangle est affiché avec l'orientation de la fonction dessinerTriangle1.
	{
		dessinerTriangle1(choix, hauteur);	// Le programme fait appelle a la fonction dessinerTriangle1 pour afficher la forme.
	}
	if (aleatoire == 2)			// Si le nombre aléatoire est 2, le triangle est affiché avec l'orientation de la fonction dessinerTriangle2.
	{
		dessinerTriangle2(choix, hauteur);	// Le programme fait appelle a la fonction dessinerTriangle2 pour afficher la forme.
	}
	if (aleatoire == 3)			// Si le nombre aléatoire est 3, le triangle est affiché avec l'orientation de la fonction dessinerTriangle3.
	{
		dessinerTriangle3(choix, hauteur);	// Le programme fait appelle a la fonction dessinerTriangle3 pour afficher la forme.
	}
	else						// Si le nombre aléatoire est 4, le triangle est affiché avec l'orientation de la fonction dessinerTriangle4.
	{
		dessinerTriangle4(choix, hauteur);	// Le programme fait appelle a la fonction dessinerTriangle4 pour afficher la forme.
	} // Fin du if/else.
	
	return 0;
}

// -------= !! Traiter Losange !! =-------

int traiterLosange(int choix)		 // Fonction demandant les dimensions de la forme, affichent la phrase de présentation de la forme avec les bonnes dimensions et finalement appellent la fonction dessinant la forme.
{
	// Déclaration des variables constantes
	const int max = 200;		// La valeur maximale qu'une contrainte peut avoir (il est impossible d'afficher une forme en plein écran après 200).
	const int min = 0;			// La valeur minimale qu'une contrainte peut avoir.
	// Déclaration des variables
	int hauteur;				// La hauteur que l'utilisateur va choisir pour la forme.
	int aleatoire = genererNombreAleatoire();	// La valeur du nombre aléatoire determiné par la fonction genererNombreAleatoire() pour déterminer de quelle façon le triangle va s'afficher.
	// Déclaration des strings
	const string forme = "triangle";	// Variable string constant pour rendre les modifications au programme plus facile.
	string remplissage;			// Variable string qui affiche a l'utilisateur si la forme est pleine ou vide.

	if (choix == 1)				// Si le choix du remplissage est 1 (plein), la variable remplissage va afficher "plein".
	{
		remplissage = "plein";	// Le programme donne la variable remplissage le string "plein".
	}
	else                        // Si le choix du remplissage n'est pas 1 (plein), la variable remplissage va afficher "vide".
	{
		remplissage = "vide";	// Le programme donne la variable remplissage le string "vide".
	} // Fin du if/else.

	cout << "Entrez la hauteur du " << forme << " : ";	 // Le programme demande a l'utilisateur d'entrer la contrainte d'hauteur pour la forme.
	cin >> hauteur;				// L'utilisateur entre son entier.

	while (hauteur <= min || hauteur > max || hauteur % 2 != 0)	// Si l'utilisateur entre un entier qui ne respecte pas les contraintes, le programme re-demande un entier.
	{
		cout << "Erreur : Vous devez entrer un entier qui est positif, qui respecte les contraintes de la forme (le losange doit avoir une hauteur pair), et qui est entre 1 et 200." << endl;	// Le programme affiche un message d'erreur.

		// le programme re-demande le choix de l'utilisateur.
		cout << "Entrez la hauteur du " << forme << " : ";
		cin >> hauteur;			// L'utilisateur entre son entier.
	} // Fin de la boucle while.

	cout << "Voici votre " << forme << " " << remplissage << " de hauteur " << hauteur << " : " << endl; // Le programme affiche a l'utilisateur les contraintes qu'il a choisi.
	dessinerLosange(choix, hauteur);	    //   Le programme appelle la fonction dessinerLosange pour afficher la forme que l'utilisateur a créé.

	return 0;
}

// -------= !! Dessiner Rectangle !! =-------


int dessinerRectangle(int remplissage, int hauteur, int largeur)	// Fonction qui dessine un rectangle ou un carré dont la hauteur, la largeur et le mode de remplissage sont passés en paramètre.
{
	if (remplissage == 1)	// Si le choix du remplissage est 1 (plein), la programme affiche la forme pleine.
	{
		// Le programme détermine la longeur et la largeur de la forme et l'affiche à l'écran.
		for (int compteur1 = 1; compteur1 <= hauteur; compteur1++) // Le programme augmente le compteur1 jusqu'à la hauteur.
		{
			for (int compteur2 = 1; compteur2 <= largeur; compteur2++) // Le programme augmente le compteur2 jusqu'à la largeur.
			{
				if (compteur1 == 1 || compteur1 == hauteur || compteur2 == 1 || compteur2 == largeur) // Le programme affiche la forme à l'écran.
				{
					cout << "*"; // Le programme affiche les * selon les propriétés du if et de la boucle for du compteur1.
				}
				else
				{
					cout << "#"; // Le programme affiche les # selon les propriétés du if et de la boucle for du compteur2 , car la forme est pleine.
				} // Fin du if/else.
			}
			cout << endl; // Le programme fini la ligne lorsque tous les * et espaces sont affichés pour une ligne.
		} // Fin de la boucle for.
	}
	else    // Si le choix du remplissage est 2 (vide), la programme affiche la forme vide.
	{
		for (int compteur1 = 1; compteur1 <= hauteur; compteur1++) // Le programme augmente le compteur1 jusqu'à la hauteur.
		{
			for (int compteur2 = 1; compteur2 <= largeur; compteur2++) // Le programme augmente le compteur2 jusqu'à la largeur.
			{
				if (compteur1 == 1 || compteur1 == hauteur || compteur2 == 1 || compteur2 == largeur) // Le programme affiche la forme à l'écran.
				{
					cout << "*"; // Le programme affiche les * selon les propriétés du if et de la boucle for du compteur1.
				}
				else
				{
					cout << " "; // Le programme affiche les espaces selon les propriétés du if et de la boucle for du compteur2 , car la forme est vide.
				} // Fin du if/else
			}
			cout << endl; // Le programme fini la ligne lorsque tous les * et espaces sont affichés pour une ligne.
		} // Fin de la boucle for.
	} // Fin du if/else du remplissage.

	return 0;
}

// -------= !! Dessiner Carré !! =-------

int dessinerCarre(int remplissage, int hauteur, int largeur)	// Fonction qui dessine un carré dont la hauteur, la largeur et le mode de remplissage sont passés en paramètre.
{
	if (remplissage == 1)	// Si le choix du remplissage est 1 (plein), la programme affiche la forme pleine.
	{
		// Le programme détermine la longeur et la largeur de la forme et l'affiche à l'écran.
		for (int compteur1 = 1; compteur1 <= hauteur; compteur1++) // Le programme augmente le compteur1 jusqu'à la hauteur.
		{
			for (int compteur2 = 1; compteur2 <= largeur; compteur2++) // Le programme augmente le compteur2 jusqu'à la largeur.
			{
				if (compteur1 == 1 || compteur1 == hauteur || compteur2 == 1 || compteur2 == largeur) // Le programme affiche la forme à l'écran.
				{
					cout << "* "; // Le programme affiche les * selon les propriétés du if et de la boucle for du compteur1.
				}
				else
				{
					cout << "#"; // Le programme affiche les # selon les propriétés du if et de la boucle for du compteur2 , car la forme est pleine.
				} // Fin du if/else.
			}
			cout << endl; // Le programme fini la ligne lorsque tous les * et espaces sont affichés pour une ligne.
		} // Fin de la boucle for.
	}
	else    // Si le choix du remplissage est 2 (vide), la programme affiche la forme vide.
	{
		for (int compteur1 = 1; compteur1 <= hauteur; compteur1++) // Le programme augmente le compteur1 jusqu'à la hauteur.
		{
			for (int compteur2 = 1; compteur2 <= largeur; compteur2++) // Le programme augmente le compteur2 jusqu'à la largeur.
			{
				if (compteur1 == 1 || compteur1 == hauteur || compteur2 == 1 || compteur2 == largeur) // Le programme affiche la forme à l'écran.
				{
					cout << "*"; // Le programme affiche les * selon les propriétés du if et de la boucle for du compteur1.
				}
				else
				{
					cout << " "; // Le programme affiche les espaces selon les propriétés du if et de la boucle for du compteur2 , car la forme est vide.
				} // Fin du if/else.
			}
			cout << endl; // Le programme fini la ligne lorsque tous les * et espaces sont affichés pour une ligne.
		} // Fin de la boucle for.
	} // Fin du if/else du remplissage.
	
	return 0;
}

// -------= !! Dessiner Triangle 1 !! =-------

int dessinerTriangle1(int remplissage, int hauteur)	// Fonction qui dessine un triangle dans la position 1 dont la hauteur et le mode de remplissage sont passés en paramètre.
{
	if (remplissage == 1)	// Si le choix du remplissage est 1 (plein), la programme affiche la forme pleine.
	{
		// Le programme détermine la hauteur de la forme et l'affiche à l'écran.
		for (int compteur1 = 1; compteur1 <= hauteur; compteur1++) // Le programme augmente le compteur1 jusqu'à la hauteur.
		{
			for (int compteur2 = 1; compteur2 <= compteur1; compteur2++) // Le programme augmente le compteur 2 jusqu'au compteur1 pour créer la forme du triangle.
			{
				if (compteur2 == 1 || compteur2 == compteur1 || compteur1 == hauteur) // Le programme affiche la forme a l'écran.
				{
					cout << "*"; // Le programme affiche les * selon les propriétés du if et de la boucle for du compteur1 et compteur2.
				}
				else
				{
					cout << "#"; // Le programme affiche les # selon les propriétés du if et de la boucle for du compteur1 et compteur2 , car la forme est pleine.
				} // Fin du if/else.
			} 
			cout << endl; // Le programme fini la ligne lorsque tous les * et espaces sont affichés pour une ligne.
		} // Fin de la boucle for.
	}
	else    // Si le choix du remplissage est 2 (vide), la programme affiche la forme vide.
	{
		// Le programme détermine la hauteur de la forme et l'affiche à l'écran.
		for (int compteur1 = 1; compteur1 <= hauteur; compteur1++) // Le programme augmente le compteur1 jusqu'à la hauteur.
		{
			for (int compteur2 = 1; compteur2 <= compteur1; compteur2++) // Le programme augmente le compteur 2 jusqu'au compteur1 pour créer la forme du triangle.
			{
				if (compteur2 == 1 || compteur2 == compteur1 || compteur1 == hauteur) // Le programme affiche la forme a l'écran.
				{
					cout << "*"; // Le programme affiche les * selon les propriétés du if et de la boucle for du compteur1 et compteur2.
				}
				else
				{
					cout << " "; // Le programme affiche les espaces selon les propriétés du if et de la boucle for du compteur1 et compteur2 , car la forme est pleine.
				} // Fin du if/else.
			} 
			cout << endl; // Le programme fini la ligne lorsque tous les * et espaces sont affichés pour une ligne.
		} // Fin de la boucle for.
	} // Fin du if/else du remplissage.

	return 0;
}

// -------= !! Dessiner Triangle 2 !! =-------

int dessinerTriangle2(int remplissage, int hauteur)	// Fonction qui dessine un triangle dans la position 2 dont la hauteur et le mode de remplissage sont passés en paramètre.
{
	if (remplissage == 1)	// Si le choix du remplissage est 1 (plein), la programme affiche la forme pleine.
	{
		// Le programme détermine la hauteur de la forme et l'affiche à l'écran.
		for (int compteur1 = 1; compteur1 <= hauteur; compteur1++) // Le programme augmente le compteur1 jusqu'à la hauteur.
		{
			for (int compteur2 = compteur1; compteur2 <= hauteur; compteur2++) // Le programme débute le compteur2 au compteur1 et augmente le compteur2 jusqu'à la hauteur pour créer la forme du triangle.
			{
				if (compteur1 == 1 || compteur2 == compteur1 || compteur2 == hauteur) // Le programme affiche la forme a l'écran.
				{
					cout << "*"; // Le programme affiche les * selon les propriétés du if et de la boucle for du compteur1 et compteur2.
				}
				else
				{
					cout << "#"; // Le programme affiche les # selon les propriétés du if et de la boucle for du compteur1 et compteur2 , car la forme est pleine.
				} // Fin du if/else.
			}
			cout << endl; // Le programme fini la ligne lorsque tous les * et espaces sont affichés pour une ligne.
		} // Fin de la boucle for.
	} // Fin du if/else du remplissage.
	else    // Si le choix du remplissage est 2 (vide), la programme affiche la forme vide.
	{
		// Le programme détermine la hauteur de la forme et l'affiche à l'écran.
		for (int compteur1 = 1; compteur1 <= hauteur; compteur1++) // Le programme augmente le compteur1 jusqu'à la hauteur.
		{
			for (int compteur2 = compteur1; compteur2 <= hauteur; compteur2++) // Le programme débute le compteur2 au compteur1 et augmente le compteur2 jusqu'à la hauteur pour créer la forme du triangle.
			{
				if (compteur1 == 1 || compteur2 == compteur1 || compteur2 == hauteur) // Le programme affiche la forme a l'écran.
				{
					cout << "*"; // Le programme affiche les * selon les propriétés du if et de la boucle for du compteur1 et compteur2.
				}
				else
				{
					cout << " "; // Le programme affiche les espaces selon les propriétés du if et de la boucle for du compteur1 et compteur2 , car la forme est pleine.
				} // Fin du if/else.
			}
			cout << endl; // Le programme fini la ligne lorsque tous les * et espaces sont affichés pour une ligne.
		} // Fin de la boucle for.
	} // Fin du if/else du remplissage.

	return 0;
}

// -------= !! Dessiner Triangle 3 !! =-------

int dessinerTriangle3(int remplissage, int hauteur)	// Fonction qui dessine un triangle dans la position 3 dont la hauteur et le mode de remplissage sont passés en paramètre.
{
	if (remplissage == 1)	// Si le choix du remplissage est 1 (plein), la programme affiche la forme pleine.
	{
		// Le programme détermine la hauteur de la forme et l'affiche à l'écran.
		for (int compteur1 = 1; compteur1 <= hauteur; compteur1++) // Le programme augmente le compteur1 jusqu'à la hauteur.
		{
			for (int compteur2 = 1; compteur2 < compteur1; compteur2++) // Le programme augmente le compteur 2 jusqu'au compteur1 pour créer l'espace à la gauche du triangle pour que le triangle descant de la gauche, à la droite.
			{
				cout << " "; // Le programme affiche des espaces pour créer l'espace à la gauche du triangle pour que le triangle descant de la gauche, à la droite.
			}
			for (int compteur2 = compteur1; compteur2 <= hauteur; compteur2++)  // Le programme augmente le compteur2 jusqu'à la hauteur pour créer la forme du triangle.
			{

				if (compteur2 == compteur1 || compteur2 == hauteur || compteur1 == 1) // Le programme affiche la forme a l'écran.
				{
					cout << "*"; // Le programme affiche les * selon les propriétés du if et de la boucle for du compteur1 et compteur2.
				}
				else
				{
					cout << "#"; // Le programme affiche les # selon les propriétés du if et de la boucle for du compteur1 et compteur2 , car la forme est pleine.
				} // Fin du if/else.
			}
			cout << endl;  // Le programme fini la ligne lorsque tous les * et espaces sont affichés pour une ligne.
		} // Fin de la boucle for.
	} 
	else    // Si le choix du remplissage est 2 (vide), la programme affiche la forme vide.
	{
		// Le programme détermine la hauteur de la forme et l'affiche à l'écran.
		for (int compteur1 = 1; compteur1 <= hauteur; compteur1++) // Le programme augmente le compteur1 jusqu'à la hauteur.
		{
			for (int compteur2 = 1; compteur2 < compteur1; compteur2++) // Le programme augmente le compteur 2 jusqu'au compteur1 pour créer l'espace à la gauche du triangle pour que le triangle descant de la gauche, à la droite.
			{
				cout << " "; // Le programme affiche des espaces pour créer l'espace à la gauche du triangle pour que le triangle descant de la gauche, à la droite.
			}
			for (int compteur2 = compteur1; compteur2 <= hauteur; compteur2++) // Le programme augmente le compteur2 jusqu'à la hauteur pour créer la forme du triangle.
			{

				if (compteur2 == compteur1 || compteur2 == hauteur || compteur1 == 1) // Le programme affiche la forme a l'écran.
				{
					cout << "*"; // Le programme affiche les * selon les propriétés du if et de la boucle for du compteur1 et compteur2.
				}
				else
				{
					cout << " "; // Le programme affiche les espaces selon les propriétés du if et de la boucle for du compteur1 et compteur2 , car la forme est pleine.
				} // Fin du if/else.
			}
			cout << endl; // Le programme fini la ligne lorsque tous les * et espaces sont affichés pour une ligne.
		} // Fin de la boucle for.
	} // Fin du if/else du remplissage.

	return 0;
}

// -------= !! Dessiner Triangle 4 !! =-------

int dessinerTriangle4(int remplissage, int hauteur)	// Fonction qui dessine un triangle dans la position 4 dont la hauteur et le mode de remplissage sont passés en paramètre.
{
	if (remplissage == 1)	// Si le choix du remplissage est 1 (plein), la programme affiche la forme pleine.
	{
		// Le programme détermine la hauteur de la forme et l'affiche à l'écran.
		for (int compteur1 = 1; compteur1 <= hauteur; compteur1++) // Le programme augmente le compteur1 jusqu'à la hauteur.
		{
			for (int compteur2 = compteur1; compteur2 < hauteur; compteur2++) // Le programme augmente le compteur 2 jusqu'au compteur1 pour créer l'espace à la gauche du triangle pour que le triangle descant de la droit, à la gauche.
			{
				cout << " "; // Le programme affiche des espaces pour créer l'espace à la gauche du triangle pour que le triangle descant de la droite, à la gauche.
			}
			for (int compteur2 = 1; compteur2 <= compteur1; compteur2++) // Le programme augmente le compteur2 jusqu'à la hauteur pour créer la forme du triangle.
			{
				if (compteur1 == hauteur || compteur2 == 1 || compteur2 == compteur1) // Le programme affiche la forme a l'écran.
				{
					cout << "*"; // Le programme affiche les * selon les propriétés du if et de la boucle for du compteur1 et compteur2.
				}
				else
				{
					cout << "#"; // Le programme affiche les espaces selon les propriétés du if et de la boucle for du compteur1 et compteur2 , car la forme est pleine.
				} // Fin du if/else.
			}
			cout << endl; // Le programme fini la ligne lorsque tous les * et espaces sont affichés pour une ligne.
		} // Fin de la boucle for.
	} 
	else    // Si le choix du remplissage est 2 (vide), la programme affiche la forme vide.
	{
		// Le programme détermine la hauteur de la forme et l'affiche à l'écran.
		for (int compteur1 = 1; compteur1 <= hauteur; compteur1++) // Le programme augmente le compteur1 jusqu'à la hauteur.
		{
			for (int compteur2 = compteur1; compteur2 < hauteur; compteur2++) // Le programme augmente le compteur 2 jusqu'au compteur1 pour créer l'espace à la gauche du triangle pour que le triangle descant de la droit, à la gauche.
			{
				cout << " "; // Le programme affiche des espaces pour créer l'espace à la gauche du triangle pour que le triangle descant de la droite, à la gauche.
			}
			for (int compteur2 = 1; compteur2 <= compteur1; compteur2++) // Le programme augmente le compteur2 jusqu'à la hauteur pour créer la forme du triangle.
			{
				if (compteur1 == hauteur || compteur2 == 1 || compteur2 == compteur1) // Le programme affiche la forme a l'écran.
				{
					cout << "*"; // Le programme affiche les * selon les propriétés du if et de la boucle for du compteur1 et compteur2.
				}
				else
				{
					cout << " "; // Le programme affiche les espaces selon les propriétés du if et de la boucle for du compteur1 et compteur2 , car la forme est pleine.
				} // Fin du if/else.
			}
			cout << endl; // Le programme fini la ligne lorsque tous les * et espaces sont affichés pour une ligne.
		} // Fin de la boucle for.
	} // Fin du if/else du remplissage.

	return 0;
}

// -------= !! Dessiner Losange !! =-------

int dessinerLosange(int remplissage, int hauteur)	// Fonction qui dessine un losange dont la hauteur et le mode de remplissage sont passés en paramètre.
{
	// Déclaration de la variable
	int millieu = hauteur/2; // Variable millieu pour former le losange.

	if (remplissage == 1)	// Si le choix du remplissage est 1 (plein), la programme affiche la forme pleine.
	{
		// Le programme détermine la hauteur de la forme et l'affiche à l'écran.
		// Le programme construit la parti haute du losange.
		for (int compteur1 = 1; compteur1 <= millieu; compteur1++) // Le programme pour le losange est une version modifié du losange sur : https://www.tutorialspoint.com/program-to-print-hollow-pyramid-and-diamond-pattern-in-cplusplus
		{
			for (int compteur2 = 1; compteur2 <= (millieu - compteur1); compteur2++) 
			{
				cout << " ";
			}
			if (compteur1 == 1)
			{
				cout << "*";
			}
			else
			{
				cout << "*";
				for (int compteur2 = 1; compteur2 <= 2 * compteur1 - 3; compteur2++)
				{
					cout << "#";
				}
				cout << "*";
			}
			cout << endl;
		} // Fin de la boucle for.
		// Le programme construit la parti basse du losange.
		for (int compteur1 = millieu + 1; compteur1 < hauteur; compteur1++)
		{
			for (int compteur2 = 1; compteur2 <= compteur1 - millieu; compteur2++)
			{
				cout << " ";
			}
			if (compteur1 == hauteur - 1)
			{
				cout << "*";
			}
			else
			{
				cout << "*";
				for (int compteur2 = 1; compteur2 <= 2 * (hauteur - compteur1) - 3; compteur2++)
				{
					cout << "#";
				}
				cout << "*";
			}
			cout << endl;
		} // Fin de la boucle for.
	}
	else    // Si le choix du remplissage est 2 (vide), la programme affiche la forme vide.
	{
		// Le programme détermine la hauteur de la forme et l'affiche à l'écran.
		// Le programme construit la parti haute du losange.
		for (int compteur1 = 1; compteur1 <= millieu; compteur1++)
		{
			for (int compteur2 = 1; compteur2 <= (millieu - compteur1); compteur2++)
			{
				cout << " ";
			}
			if (compteur1 == 1)
			{
				cout << "*";
			}
			else
			{
				cout << "*";
				for (int compteur2 = 1; compteur2 <= 2 * compteur1 - 3; compteur2++)
				{
					cout << " ";
				}
				cout << "*";
			}
			cout << endl;
		}
		// Le programme construit la parti basse du losange.
		for (int compteur1 = millieu + 1; compteur1 < hauteur; compteur1++)
		{
			for (int compteur2 = 1; compteur2 <= compteur1 - millieu; compteur2++)
			{
				cout << " ";
			}
			if (compteur1 == hauteur - 1)
			{
				cout << "*";
			}
			else
			{
				cout << "*";
				for (int compteur2 = 1; compteur2 <= 2 * (hauteur - compteur1) - 3; compteur2++)
				{
					cout << " ";
				}
				cout << "*";
			}
			cout << endl;
		} // Fin de la boucle for.
	}

	return 0;
}
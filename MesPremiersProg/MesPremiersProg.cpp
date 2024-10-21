// MesPremiersProg.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "FonctionsProg.h"
#include <iostream>

	int main()
	{
		std::cout << "salut bienvenue\n";
		std::cout << "1.Estimation du cout d’un abonnement téléphonique\n";
		std::cout << "2.  Calcul de caisse \n";
		std::cout << "3.  Affichage d'un caractère et de son code ASCII\n";
		std::cout << "4.  Table des codes ASCII\n";
		std::cout << "5.  Taille des variables\n";
		std::cout << "6.  Jeu de devinette\n";
		std::cout << "7.  Triangle d’étoiles\n";
		std::cout << "8.  fin du programe\n";

		int choix;
		bool etape = false;



		cout << "entre le chifre du programe que vous voulez ";
		while (!etape)
		{
			cin >> choix;
			switch (choix)

			{
			case 1:
				ex4();
				etape = true;
				break;

			case 2:
				exercice5();
				etape = true;
				break;
			case 3:
				exercice6();
				etape = true;
				break;
			case 4:
				exercice7();
				etape = true;
				break;
			case 5:
				exercice8();
				etape = true;
				break;
			case 6:
				exercice9();
				etape = true;
				break;
			case 7:
				exercice10_version2();
				etape = true;
				break;

			case 8:
				etape = true;
				break;
			default: cout << "retapere un chifre en 1 et 7 \n ";
				break;


			}
		}

}



// Nom du projet : Programme regroupant tous les programmes du TP précédant 
// Nom de l’auteur : MAxime Bonnevay
// Date de création : 21/10/2024
// Résumé : 1.  Estimation du cout d’un abonnement téléphonique 
//2.  Calcul de caisse
//3.  Affichage d'un caractère et de son code ASCII 
//4.  Table des codes ASCII
//5.  Taille des variables
//6.  Jeu de devinette
//7.  Triangle d’étoiles








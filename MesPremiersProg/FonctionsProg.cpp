#include "FonctionsProg.h"

bool ceciEstUnNombre(const string& s)
	{
		string::const_iterator it = s.begin();
		while (it != s.end() && isdigit(*it)) ++it;
		return !s.empty() && it == s.end();
	}

int ex4()
{

	bool commencer = true, continuer = false, premiereFois = true;

	while (commencer) {
		char forfait = 'c', dureeAppel[10], nombreSms[10], recommencer = 'o';
		bool etape1 = false, etape2 = false, etape3 = false;
		double coutTotal = 0.00;
		if (continuer) {
			std::cout << "\n\x1B[36mVoulez-vous recommencer une simulation ? (O/N)\033[0m\t\t \n";
			std::cin >> recommencer;
			if (recommencer == 'n' || recommencer == 'N') {
				commencer = false;
				std::cout << "\nAu revoir, a bientot ^^ \n";
				std::this_thread::sleep_for(std::chrono::seconds(1));
				return 0;
			}
		}
		if (recommencer == 'o' || recommencer == 'O') {
			if (premiereFois) {
				std::cout << "Bonjour, bienvenue sur notre plateforme. \n\n";
				std::this_thread::sleep_for(std::chrono::seconds(1));
			}
		}
		std::cout << "Cha";
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << "rge";
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << "ment !\n\n";
		std::this_thread::sleep_for(std::chrono::seconds(1));
		while (!etape1)
		{
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			std::cout << "\x1B[36mQuel est votre formule de forfait ? (A/B)\033[0m\t\t \n";
			std::cin >> forfait;
			if (forfait == 'A' || forfait == 'B' || forfait == 'a' || forfait == 'b') {
				etape1 = true;
			}
			else {
				std::cout << "\x1B[31mEntrer une valeur valide (A ou B) !\033[0m\t\t \n\n";
			}


		}
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << "Parfait, question suivante. \n\n";
		std::this_thread::sleep_for(std::chrono::seconds(2));
		while (!etape2)
		{
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			std::cout << "\x1B[36mCombien de minutes d'appel avez-vous passe ?\033[0m\t\t \n";
			std::cin >> dureeAppel;
			if (ceciEstUnNombre(dureeAppel)) {
				etape2 = true;
			}
			else {
				std::cout << "\x1B[31mEntrer un nombre valide !\033[0m\t\t \n\n";
			}


		}
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << "Nous avons presque terminee, derniere question. \n\n";
		std::this_thread::sleep_for(std::chrono::seconds(2));
		while (!etape3)
		{
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			std::cout << "\x1B[36mCombien d'SMS avez-vous envoyes ?\033[0m\t\t \n";
			std::cin >> nombreSms;
			if (ceciEstUnNombre(nombreSms))
			{
				etape3 = true;
			}
			else {
				std::cout << "\x1B[31mEntrer un nombre valide !\033[0m\t\t \n\n";
			}


		}

		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << ".";
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << ".";

		if (forfait == 'a' || forfait == 'A') {
			coutTotal = 2 + (0.3 * atoi(dureeAppel)) + (0.1 * atoi(nombreSms));
		}
		else if (forfait == 'b' || forfait == 'B') {
			coutTotal = 4 + (0.2 * atoi(dureeAppel)) + (0.088 * atoi(nombreSms));
		}

		coutTotal = std::ceil(coutTotal * 100.0) / 100.0;

		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << ". \n\n";
		std::this_thread::sleep_for(std::chrono::seconds(1));

		std::cout << "Le cout total serait de " << coutTotal << "EUR \n\n";
		premiereFois = false;
		continuer = true;

	}
}

void exercice5()
{

	using namespace std;

	double pieceCent1 = 0.00, pieceCent2 = 0.00, pieceCent5 = 0.00, pieceCent10 = 0.00, pieceCent20 = 0.00, pieceCent50 = 0.00, pieceEuro1 = 0.00, pieceEuro2 = 0.00;
	double total = 0.00;

	std::cout << "Entrer le nombre de piece(s) de 1c\n";
	std::cin >> pieceCent1;
	std::cout << "\nEntrer le nombre de piece(s) de 2c\n";
	std::cin >> pieceCent2;

	std::cout << "\nEntrer le nombre de piece(s) de 5c\n";
	std::cin >> pieceCent5;

	std::cout << "\nEntrer le nombre de piece(s) de 10c\n";
	std::cin >> pieceCent10;

	std::cout << "\nEntrer le nombre de piece(s) de 20c\n";
	std::cin >> pieceCent20;

	std::cout << "\nEntrer le nombre de piece(s) de 50c\n";
	std::cin >> pieceCent50;

	std::cout << "\nEntrer le nombre de piece(s) de 1EUR\n";
	std::cin >> pieceEuro1;

	std::cout << "\nEntrer le nombre de piece(s) de 2EUR\n";
	std::cin >> pieceEuro2;

	total = (pieceCent1 * .01) + (pieceCent2 * .02) + (pieceCent5 * .05) + (pieceCent10 * .10) + (pieceCent20 * .20) + (pieceCent50 * .50) + pieceEuro1 + (pieceEuro2 * 2);

	std::cout << "Le resultat est de : " << total << "EUR\n";

	this_thread::sleep_for(chrono::seconds(1));
	std::cout << "Au revoir !";
}

void exercice6()
{
	

		using namespace std;

		/*
		Pseudocode :

		Démarrer le programme
		Demander à l'utilisateur d'entrer un caractère
		Lire le caractère saisi
		Convertir le caractère en son code ASCII en décimal
		Convertir le caractère en son code ASCII en hexadécimal
		Afficher le code ASCII en décimal
		Afficher le code ASCII en hexadécimal
		Terminer le programme
		*/

		char caractere;

		std::cout << "Entrez un caractere : ";
		std::cin >> caractere;

		std::cout << "Le caractere '" << caractere << "' a pour code ASCII : " << endl;
		std::cout << "En decimal : " << static_cast<int>(caractere) << endl;
		std::cout << "En hexadecimal : " << hex << static_cast<int>(caractere) << endl;
	
}

void exercice7()
{
/*
	Pseudocode :
	Démarrer le programme
	Parcourir les codes ASCII de 32 à 127 inclus :
	Convertir chaque tour en un caractère
	Afficher le caractère
	Afficher le code ASCII en décimal
	Afficher le code ASCII en hexadécimal
	Terminer le programme
	*/

	/*
	for (int i = 32; i <= 127; i++) {
	char caractere = static_cast<char>(i);

	cout << "Caractere :'" << caractere << "'ASCII decimal : " << i
	<< " ASCII hexadecimal : " << hex << i << dec << endl;
	}
	*/

	for (char caractere = 32; caractere <= 126; caractere++) {
		std::cout << "Caractere :'" << caractere << "'ASCII decimal : "
			<< static_cast<int>(caractere)
			<< "ASCII hexadecimal : " << hex << static_cast<int>(caractere)
			<< dec << endl;
	}

char caractere127 = 127;
std::cout << "Caractere :'DEL'ASCII decimal : "
<< static_cast<int>(caractere127)
<< "ASCII hexadecimal : " << hex << static_cast<int>(caractere127)
<< dec << endl;
}

void exercice8()
{
	/*
	Pseudocode :
	Démarrer le programme.
	Afficher la taille en octets d'un char.
	Afficher la taille en octets d'un bool.
	Afficher la taille en octets d'un int.
	Afficher la taille en octets d'un float.
	Afficher la taille en octets d'un double.
	Terminer le programme.
	*/

	std::cout << "Taille d'un char : " << sizeof(char) << " octets" << endl;
	std::cout << "Taille d'un bool : " << sizeof(bool) << " octets" << endl;
	std::cout << "Taille d'un int : " << sizeof(int) << " octets" << endl;
	std::cout << "Taille d'un float : " << sizeof(float) << " octets" << endl;
	std::cout << "Taille d'un double : " << sizeof(double) << " octets" << endl;
}

void exercice9()

	{
		/*
		Pseudocode :
		Démarrer le programme en initialisant le générateur de nombres aléatoires.
		Demander à l'utilisateur de saisir la valeur maximale pour le nombre à deviner.
		Générer un nombre aléatoire entre 0 et la valeur maximale choisie.
		Demander à l'utilisateur de deviner le nombre.
		Tant que l'utilisateur n'a pas deviné le bon nombre, lire le nombre saisi par l'utilisateur et comparer :
		Si le nombre est plus petit, informer l'utilisateur que c'est trop bas.
		Si le nombre est plus grand, informer l'utilisateur que c'est trop élevé.
		Si le nombre est correct, féliciter l'utilisateur et terminer le programme.
		*/

		srand(static_cast<unsigned int>(time(0)));

		int valeurMax;
		std::cout << "Entrez la valeur maximale pour le nombre a deviner : ";
		std::cin >> valeurMax;

		int nombreADeviner = rand() % valeurMax + 1;
		int trouver = -1;

		while (trouver != nombreADeviner) {
			cout << "Devinez le nombre : ";
			cin >> trouver;

			if (trouver < nombreADeviner) {
				cout << "C'est plus grand !" << endl;
			}
			else if (trouver > nombreADeviner) {
				cout << "C'est plus petit !" << endl;
			}
			else {
				cout << "Bravo ^^\nVous avez gagne." << endl;
			}
		}
	}

void exercice10_version2()
{

	int tailleTriangle = 0;

	cout << "Entrez la taille du triangle d'etoiles : ";
	cin >> tailleTriangle;

	while (tailleTriangle <= 0) {
		cout << "\x1B[31mEntrez un nombre positif superieur a 0.\033[0m" << endl;
		cin >> tailleTriangle;
	}
	vector<char*> triangle(tailleTriangle);

	for (int i = 0; i < tailleTriangle; ++i) {
		triangle[i] = new char[i + 2];
		triangle[i][0] = '\0';
		for (int j = 0; j <= i; ++j) {
			strncat_s(triangle[i], i + 2, "*", 1);
		}
	}
	for (const auto& ligne : triangle) {
		cout << ligne << endl;
		delete[] ligne;
	}
}

void supplement4()
{
	int tailleTriangle = 0;
	char typeTriangle, modeRempli;
	cout << "Entrez la taille du triangle d'etoiles : ";
	cin >> tailleTriangle;

	while (tailleTriangle <= 0) {
		cout << "\x1B[31mEntrez un nombre positif superieur a 0.\033[0m" << endl;
		cin >> tailleTriangle;
	}
	cout << "Choisissez le type de triangle (r pour rectangle, i pour isocele) : ";
	cin >> typeTriangle;
	cout << "Choisissez le mode de remplissage (r pour rempli, v pour vide) : ";
	cin >> modeRempli;

	bool rempli = (modeRempli == 'r');
	if (typeTriangle == 'r') {
		for (int i = 1; i <= tailleTriangle; ++i) {
			if (rempli) {
				cout << string(i, '*') << endl;
			}
			else {
				cout << "*";
				if (i > 1) {
					cout << string(i - 2, ' ') << "*";
				}
				cout << endl;
			}
		}
	}
	else if (typeTriangle == 'i') {
		for (int i = 0; i < tailleTriangle; ++i) {
			if (rempli) {
				cout << string(tailleTriangle - i - 1, ' ')
					<< string(2 * i + 1, '*') << endl;
			}
			else {
				cout << string(tailleTriangle - i - 1, ' ') << "*";
				if (i > 0) {
					cout << string(2 * i - 1, ' ') << "*";
				}
				cout << endl;
			}
		}
	}
	else {
		cout << "Type de triangle non reconnu." << endl;
	}
}






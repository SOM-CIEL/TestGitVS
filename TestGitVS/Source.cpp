#include <iostream>
using namespace std;

int calcule_case();

int main() 
{

	cout << "Bonjour dans mon multi prgramme" << endl;
	cout << "vous devez selactionner la mode qui vous interesse :)" << endl;
	cout << "Mode :" << endl;
	cout << "Programme de calcule de caisse :1 " << endl;
	cout << "Programme de Facture :2 " << endl;
	cout << "Programme de Tarif appel :3 " << endl;
	cout << "Programme de  :4 " << endl;

	int choice;

	cout << "Taper le chiffre de programme que vous vouler :"; cin >> choice;
	switch (choice)
	{
		case 1:
		{
			int calcule_case();
			{
				// Déclaration des autres variables (pièce, euro)
				// Saisie le prix des pièce centimes
				//saisie le prix des pièce euro
				//calcul les centimes
				//calcul l'euro
				//afficher le resultat
				printf("Bonjour commercant voisi votre nombre de piece du jour :-) \n");// Affichage d'un message d'accueil
				printf("...\n");
				double c_1(0.1);
				double c_2(0.2);
				double c_5(0.5);
				double c_10(0.10);
				double c_20(0.20);
				double c_50(0.50);
				int euro_1(1);
				int euro_2(2);
				double argent(0);
				double prix_t = 0.0;

				cout << "tu as combien de 1c :"; cin >> argent;
				prix_t += c_1 * argent;
				cout << "tu as combien de 2c :"; cin >> argent;
				prix_t += c_2 * argent;
				cout << "tu as combien de 5c :"; cin >> argent;
				prix_t += c_5 * argent;
				cout << "tu as combien de 10c :"; cin >> argent;
				prix_t += c_10 * argent;
				cout << "tu as combien de 20c :"; cin >> argent;
				prix_t += c_20 * argent;
				cout << "tu as combien de 50c :"; cin >> argent;
				prix_t += c_50 * argent;
				cout << "tu as combien de 1 euro :"; cin >> argent;
				prix_t += euro_1 * argent;
				cout << "tu as combien de 2 euro :"; cin >> argent;
				prix_t += euro_2 * argent;

				cout << "Vous avez gagner :" << prix_t << endl;
			}
		
		}
		case 2:
		{
			int facture();
			{

				cout << " TP facture, par SOMBE Nicolas." << endl;

				cout << "Ce programe est fait pour calculer des facture :)" << endl;
				cout << "Societe SOMBE" << endl;
				cout << "aU SAINT SAINT DENI" << endl;
				cout << "91 Paris" << endl;

				char clien[20];
				char produit[20];
				int quantite;
				double prix(0.00);
				double tva(0.00);
				double prix_total(0.00);
				double prix_tva(0.00);

				cout << "Entrez le nom du client :"; cin >> clien;
				cout << "Entrez le nom du produit :"; cin >> produit;
				cout << "Entrez la quantite :"; cin >> quantite;
				cout << "Entrez le prix unitaire hors taxe :"; cin >> prix;
				cout << "Entrez le taux de tva% :"; cin >> tva;

				prix_total = quantite * prix;
				prix_tva = prix_total + prix_total * tva / 100;

				cout << "Client :" << clien << endl;


				cout << "Produit :" << produit << "     " << "Qt:" << quantite << "     " << "Prix" << prix << "     " << "tva :" << tva << endl;


				cout << "Total a regler..........................." << prix_total << endl;
				cout << "Total avec la tva................." << prix_tva << endl;

				return(0);
			}
		}
			break;
	}
		//case 3:
			//break;
		//case 4:
			//break;
		//}	
}
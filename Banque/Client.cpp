#include "Client.h"
#include <iostream>
using namespace std;
using namespace Banque;

Banque::Client::Client(string nom,string prenom,string adr)
{
	this->nomC = nom;
	this->prenomC = prenom;
	this->adresse = adr;
} 

void Banque::Client::addCompte(Compte& c)
{
	this->listComptes.push_back(c);
}

void Banque::Client::print_Client() const
{
	cout << "Nom de  :" << this->nomC << endl;
	cout << "Prenom  :" << this->prenomC << endl;
	cout << "Adresse :" << this->adresse << endl;
}


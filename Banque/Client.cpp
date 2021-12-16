#include "Client.h"
#include "Compte.h"
#include <iostream>
using namespace std;
using namespace Banque;

Banque::Client::Client(string nom,string prenom,string adr)
{
	this->nomC = nom;
	this->prenomC = prenom;
	this->adresse = adr;
	this->listComptes= vector<Compte*>();
} 

void Banque::Client::addCompte(Compte& c)
{
	this->listComptes.push_back(&c);
}

void Banque::Client::print_Client() const
{
	cout << "---------------------------------------------------------" << endl;
	cout << "      Nom de : " << this->nomC << endl;
	cout << "      Prenom  :" << this->prenomC << endl;
	cout << "      Adresse :" << this->adresse << endl;
	for (unsigned int i = 0; i < this->listComptes.size(); i++)
	{
		this->listComptes[i]->print_Compte();
	}
	cout << "---------------------------------------------------------" << endl;

}


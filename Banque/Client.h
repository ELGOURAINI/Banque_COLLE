#pragma once
#include <iostream>
#include <list>
using namespace std;
namespace Banque
{
	class Compte;
	class Client
	{
	private:
		string nomC;
		string prenomC;
		string adresse;
		list<Compte> listComptes;
	public:
		Client(string nom, string prenom, string adr);
		void addCompte(Compte& c);
		void print_Client() const;
	};
}

#pragma once
#include <iostream>
#include <vector>
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
		vector<Compte*> listComptes;
	public:
		Client(string nom, string prenom, string adr);
		void addCompte(Compte& c);
		void print_Client() const;
	};
}

#pragma once
#include "GC.h"
#include "Devise.h"
#include <iostream>
#include <vector>
using namespace std;
namespace Banque
{
	class Operations;
	class Client;
	class Compte
	{
	private:
		const int idC;
		static int comptId;
		Client* titulaire;
		Devise* Solde;
		static Devise* plafond;
		vector<Operations*> listOp;
		GC* ref;
	public:
		Compte(Client*,Devise*);
		virtual string Crediter(Devise* D);
		virtual bool Debiter(Devise* D);
		virtual bool Verser(Compte& C,Devise* D);
		void addOp(Operations&);
		virtual void print()const=0;
		void print_Compte() const;//facilite l'affichage des details de compte fils de compte 
		~Compte();

	protected:
		Devise& pourcentage(double a) const;
		bool permissionDebiter(Devise& M);
	};
}



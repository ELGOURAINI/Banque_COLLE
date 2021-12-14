#pragma once
#include "Client.h"
#include "Devise.h"
#include <iostream>
#include <list>
using namespace std;
namespace Banque
{
	class Operations;
	class Compte
	{
	private:
		const int idC;
		static int comptId;
		Client* titulaire;
		Devise* Solde;
		static double plafond;
		list<Operations> listOp;
	public:
		Compte(Client* titu,Devise* dev);
		virtual void Crediter(Devise* D);
		virtual bool Debiter(Devise* D);
		virtual bool Verser(Compte& C,Devise* D);
		void addOp(Operations& c);
		virtual void print()const=0;
		void print_Compte() const;
		~Compte();

	protected:
		Devise& pourcentage(double a) const;
		bool permissionDebiter(Devise& M);
	};
}



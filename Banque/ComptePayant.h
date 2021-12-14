#pragma once
#include "Compte.h"
#include <iostream>
using namespace std;
namespace Banque {
	class ComptePayant :public Compte
	{
	private:


	public:
		ComptePayant(Client*, Devise*);
		bool Debiter(Devise* M) override;
		bool Verser(Compte& C, Devise* D) override;
		void print()const;
	};

}
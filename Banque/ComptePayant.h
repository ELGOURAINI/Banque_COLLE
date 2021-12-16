#pragma once
#include "Compte.h"
namespace Banque {
	class ComptePayant :public Compte
	{
	public:
		ComptePayant(Client*, Devise*);
		bool Debiter(Devise* M) override;
		bool Verser(Compte& C, Devise* D) override;
		void print()const;
	};

}
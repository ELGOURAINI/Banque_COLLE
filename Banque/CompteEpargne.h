#pragma once
#include "Compte.h"

namespace Banque {
	class CompteEpargne : public Compte
	{
	private:
		double  TauxInter�t;

	public:
		CompteEpargne(Client*, Devise*, double = 0.0);
		void calculInt�r�t();
		void print() const;
		//bool Debiter(Devise* M) override;
	};
}



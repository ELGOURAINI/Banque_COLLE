#pragma once
#include "Compte.h"

namespace Banque {
	class CompteEpargne : public Compte
	{
	private:
		double  TauxInterêt;

	public:
		CompteEpargne(Client*, Devise*, double = 0.0);
		void calculIntérêt();
		void print() const;
		//bool Debiter(Devise* M) override;
	};
}



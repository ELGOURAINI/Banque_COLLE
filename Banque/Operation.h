#pragma once
#include "Devise.h"
#include "Compte.h"
#include <iostream>
#include <list>
using namespace std;
namespace Banque
{
	class  Operations
	{
		//class  Devise;
		//class  Compte;
	private:
		const int Num_Op;
		static int Compt_Num_Op;
		Devise* Montant;
		string date;
		string libelle;
		Compte* C;
	public:
		Operations(Compte*, Devise*, string, string);
		virtual void afficher() = 0;
	protected:
		void detail_op() const;
	};
}


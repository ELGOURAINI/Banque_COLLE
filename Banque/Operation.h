#pragma once
#include <iostream>
using namespace std;
namespace Banque
{
	class Compte;
	class Devise;
	class  Operations
	{
	private:
		const int Num_Op;
		static int Compt_Num_Op;
		Devise* Montant;
		string date;
		string libelle;
		Compte* C;
	public:
		Operations(Compte*, Devise*, string, string);
		virtual void afficher()const = 0;
	protected:
		void detail_op() const;
	};
}


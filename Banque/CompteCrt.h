#pragma once
#include "Compte.h"
namespace Banque {
	//class Devise;
	class CompteCrt : public Compte
	{
	private:
		static Devise* Decouvert;

	public:
		CompteCrt(Client*, Devise*, Devise*);
		void print()const;
	};

}

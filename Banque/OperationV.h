#pragma once
#include "Operation.h"
#include <iostream>
using namespace std;
namespace Banque
{
	class Compte;
	class Devise;
	class OperationV :public Operations
	{
	public:
		OperationV(Compte* C, Devise* D, string lib, string date);
		void afficher()const ;
	};
}


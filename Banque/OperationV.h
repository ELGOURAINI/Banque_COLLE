#pragma once
#include "Operation.h"
#include "Devise.h"
#include "Compte.h"
#include <iostream>
using namespace std;
namespace Banque
{
	class OperationV :public Operations
	{
	public:
		OperationV(Compte* C, Devise* D, string lib, string date);
		void afficher() override;
	};
}


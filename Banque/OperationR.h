#pragma once
#include "Operation.h"
#include "Devise.h"
#include "Compte.h"
#include <iostream>
using namespace std;
namespace Banque
{
	class OperationR :public Operations
	{
	public:
		OperationR(Compte* C, Devise* D, string lib, string date);
		void afficher() override;
	};
}


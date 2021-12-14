#pragma once
#include "Devise.h"
#include "DOLLAR.h"
#include "MAD.h"
#include <iostream>
using namespace std;
namespace Banque
{
	class Devise;
	class DOLLAR;
	class MAD;
	class Euro : public Devise
	{
	private:
		string type;
	public:
		Euro(double val, string type);
		Euro&ConvertToEURO();
		MAD&ConvertToMAD();
		DOLLAR&ConvertToDOLLAR();
		void detail_devise()const;
	};

};



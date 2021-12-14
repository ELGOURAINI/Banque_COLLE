#pragma once
#include "Devise.h"
#include <iostream>
#include "MAD.h"
#include "Euro.h"
using namespace std;
namespace Banque
{
	class Devise;
	class MAD;
	class MAD;
	class DOLLAR :public Devise
	{
	private:
		string type;
	public:
		DOLLAR(double val, string type);
		DOLLAR& ConvertToDOLLAR();
		MAD&ConvertToMAD();
		Euro& ConvertToEURO();
		void detail_devise()const;
	};

};



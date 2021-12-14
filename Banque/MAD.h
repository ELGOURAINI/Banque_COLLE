#pragma once
#include "Devise.h"
#include "DOLLAR.h"
#include "Euro.h"
#include <iostream>
using namespace std;
namespace Banque
{
	class Devise;
	class DOLLAR;
	class Euro;
	class MAD :public Devise
	{
	private:
		string type;
	public:
		MAD(double val, string type);
		MAD& ConvertToMAD();
		DOLLAR& ConvertToDOLLAR() ;
		Euro& ConvertToEURO();
		void detail_devise()const;
	};

};



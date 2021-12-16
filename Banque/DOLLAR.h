#pragma once
#include "Devise.h"
namespace Banque
{
	class DOLLAR :public Devise
	{
	private:
		static double tauxMAD;
		static double tauxEuro;
	public:
		DOLLAR(double val);
		DOLLAR& ConvertToDOLLAR();
		MAD&ConvertToMAD();
		Euro& ConvertToEURO();
		void detail_devise()const;
	};

};



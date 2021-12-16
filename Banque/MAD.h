#pragma once
#include "Devise.h"
namespace Banque
{
	class MAD :public Devise
	{
	private:
		static double tauxDollar;
		static double tauxEuro;
	public:
		MAD(double val);
		MAD& ConvertToMAD();
		DOLLAR& ConvertToDOLLAR() ;
		Euro& ConvertToEURO();
		void detail_devise()const;
	};

};



#include "Bank.h"
#include "Kunde.h"
#include <iostream>

using namespace std;


int main()
{		
	kunde kKunde;
	Bank bBank;
	string strValue;
	string strW�hrung;
		
	for (;;)
	{
		kKunde.GeldKarte_einschieben();		
		if (kKunde.PIN_eingeben())
		{			
			strW�hrung = kKunde.W�hrung_waehlen();
			if (bBank.Geld_Abheben(kKunde.Betrag_waehlen(strW�hrung)))
			{
				cout << "Der gewuenschte Betrag wurde abgehoben." << endl;				
			}
			else
			{
				cout << "Der gewuenschte Betrag wurde nicht abgehoben." << endl;
			}
		}
		else
		{
			cout << "Die PIN ist falsch." << std::endl;
		}
	}

	return 0;
}
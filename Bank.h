#pragma once
#include <string>

using namespace std;


class Bank
{
public:
	 Bank();
	 Bank(string Benutzername, string PIN, int Kontostand);
	~ Bank();
	string GetPIN();
	void SetPIN(string strPIN);
	string GetBenutzername();
	void SetBenutzernatme(string strBenutzername);
	int GetKontostand();
	void SetKontostand(int iBetrag);
	bool zugriff_ueberpruefen(string Benutzername, string PIN);
	bool Geld_Abheben(int iBetrag);
	int KontoStand_Anzeigen(int iBetrag);
				
private:
	string PIN;
	string Benutzername;
	int    Kontostand;
};

#pragma once
#include <string>

using namespace std;

class kunde {

public:
	kunde();
	~kunde();
	
	string GetPIN();
	void SetPIN(string strPIN);
	bool PIN_eingeben();
	void GeldKarte_einschieben();
	string Währung_waehlen();
	int Betrag_waehlen(string strWährung);


private:
	string PIN;	
	string strBenutzname;
	enum eWährung { Euro = 1, Dollars = 2 };
	
};
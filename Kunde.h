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
	string W�hrung_waehlen();
	int Betrag_waehlen(string strW�hrung);


private:
	string PIN;	
	string strBenutzname;
	enum eW�hrung { Euro = 1, Dollars = 2 };
	
};
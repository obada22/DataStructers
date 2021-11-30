/**
* @file
* @description Arraylist kullanarak iki ayrý arraylisteyi oluþturup deðiþikilk yapmak
* @course  Veri Yapýlarý  B2
* @assignment  1. ödev
* @date  03.11.2019
* @author G151210568 Umut Zarif umutzarif34@gmail.com
*/
#include <iostream>
#include <string>
#include <windows.h> 
#include "Top.h"
using namespace std;

int renk;
char smbl;
Top::Top()
{
	setRenk(rand() % 15 + 1);
	setSembol(rand() % 90 + 65);
}

int Top::getRenk() {
	return renk;
};

void Top::setRenk(int Renk) {
	renk = Renk;
};

char Top::getsembol() {
	return smbl;
};

void Top::setSembol(char sembol) {
	smbl = sembol;
};

Top::~Top()
{
}

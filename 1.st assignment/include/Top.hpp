#ifndef TOP_HPP
#define TOP_HPP
/**
* @file
* @description Arraylist kullanarak iki ayr� arraylisteyi olu�turup de�i�ikilk yapmak
* @course  Veri Yap�lar�  B2
* @assignment  1. �dev
* @date  03.11.2019
* @author G151210568 Umut Zarif umutzarif34@gmail.com
*/

class Top
{
public:
	Top();

	int renk;
	char smbl;
	int getRenk();
	void setRenk(int);
	char getsembol();
	void setSembol(char);
	~Top();
};
#endif
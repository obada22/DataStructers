#ifndef TOP_HPP
#define TOP_HPP
/**
* @file
* @description Arraylist kullanarak iki ayrý arraylisteyi oluþturup deðiþikilk yapmak
* @course  Veri Yapýlarý  B2
* @assignment  1. ödev
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
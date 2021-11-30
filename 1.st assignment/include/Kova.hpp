#ifndef KOVA_HPP
#define KOVA_HPP
/**
* @file
* @description Arraylist kullanarak iki ayrý arraylisteyi oluþturup deðiþikilk yapmak
* @course  Veri Yapýlarý  B2
* @assignment  1. ödev
* @date  03.11.2019
* @author G151210568 Umut Zarif umutzarif34@gmail.com
*/
#include"Top.h"
class Kova
{

public:
	Kova(int);
	void setObj(int);
	void print();
	void changeKova(int, int, int);
	void reverseKova(Top r[], int o);
	void doReverse(int);
	~Kova();
};
#endif
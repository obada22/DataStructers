#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
/*
*
* @file  linkedlist.hpp
* @description txt t�r�nden bir dosyadan okuyup birer kelime b�l�p iki y�nl� ba�l� listeye atmakt�r.
* @course  Veri yap�lar� /2.B
* @assignment  2. �dev
* @date  25.11.2019
* @author  Umut ZAR�F G151210568
*/

#include "Node.hpp"
class linkedList
{
private:
	Node *tail, *head;
	int elemanSayisi;
public:
	linkedList();
	void push_front(string data);
	void push_back(const string data);
	void display();
	string bul(string str);
	
	~linkedList();
};
#endif

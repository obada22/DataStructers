#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
/*
*
* @file  linkedlist.hpp
* @description txt türünden bir dosyadan okuyup birer kelime bölüp iki yönlü baðlý listeye atmaktýr.
* @course  Veri yapýlarý /2.B
* @assignment  2. ödev
* @date  25.11.2019
* @author  Umut ZARÝF G151210568
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

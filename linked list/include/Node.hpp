#ifndef NODE_HPP
#define NODE_HPP
/*
*
* @file  Node.hpp
* @description txt t�r�nden bir dosyadan okuyup birer kelime b�l�p iki y�nl� ba�l� listeye atmakt�r.
* @course  Veri yap�lar� /2.B
* @assignment  2. �dev
* @date  25.11.2019
* @author  Umut ZAR�F G151210568
*/

#include<iostream>
#include <string>
using namespace std;
class Node
{
public:
	string data;
	Node *next, *prev;
	Node(string data);
	~Node();
};

#endif
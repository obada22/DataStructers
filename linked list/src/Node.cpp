/*
*
* @file Node.cpp
* @description txt t�r�nden bir dosyadan okuyup birer kelime b�l�p iki y�nl� ba�l� listeye atmakt�r.
* @course  Veri yap�lar� /2.B
* @assignment  2. �dev
* @date  25.11.2019
* @author  Umut ZAR�F G151210568
*/

#include "Node.hpp"
Node::Node(string data)
{
	this->data = data;
	this->next = next;
	this->prev = prev;
}
Node::~Node()
{
}
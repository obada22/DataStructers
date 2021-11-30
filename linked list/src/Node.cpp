/*
*
* @file Node.cpp
* @description txt türünden bir dosyadan okuyup birer kelime bölüp iki yönlü baðlý listeye atmaktýr.
* @course  Veri yapýlarý /2.B
* @assignment  2. ödev
* @date  25.11.2019
* @author  Umut ZARÝF G151210568
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
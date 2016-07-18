/*
 * Tree.h
 *
 *  Created on: May 28, 2016
 *      Author: raydelto y francis
 */

#include "Menu.h"
class Arbol
{
private:
	
	Menu* _raiz;
	Menu* a;
	Menu* b;
	
	int opcion, chijo;
	string raiz,  nombre[100];
public:
	void Menu();
	void recorrer(Menu* Menu);
	Arbol(Menu* raiz);
	virtual ~Arbol(void);
};


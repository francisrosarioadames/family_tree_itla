
// god is real and good
#include <iostream>
#include <stdlib.h>
#include "Tree.h"
// autora francis Rosario Adames
// esta tarea fue hecha en espanol debido
// a que fue hecha por mi desde cero por 
// que confiaba en nuestra capicida para hacerla desde cero
using namespace std;

//TODO: Implement this code from the scratch
/*
 * At this point your expected to be able to create your code from the scratch without any guidance.
 *
 */

int main()
{

	Nodo* c = new Nodo("A");
	Arbol* v = new Arbol(c);
	v->Menu();

	Nodo* a = new Nodo("A");
	Nodo* b = new Nodo("B");
	//Nodo* c = new Nodo("C");
	Nodo* e = new Nodo("E");
	Nodo* f = new Nodo("F");
	Nodo* g = new Nodo("G");
	Nodo* h = new Nodo("H");
	a->agregarhijo(b);
	a->agregarhijo(c);

	c->agregarhijo(e);
	c->agregarhijo(f);

	e->agregarhijo(h);

	f->agregarhijo(g);

	Arbol* arbl = new Arbol(a);
	arbl->recorrer(a);

	system("pause");
	return 0;
}

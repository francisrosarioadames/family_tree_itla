/*
 * Menu.h
 *
 *  Created on: May 28, 2016
 *      Author: raydelto y francis
 */
//#ifndef MENU_H_
#define MENU_H_

#include "iostream"
#include <string>

using namespace std;

class Menu{

	private:
		Menu* siguiente;
		Menu* primerHijo;
		Menu* ultimoHijo;
		string nombre;
		int hijo;

	public:
		void agregarhijo(Menu* hijo);
		Menu* getHijo();
		Menu(string nombre);
		virtual ~Menu();

		int getNumeroHijo();

		void setSiguiente(Menu* &siguiente)
		{
			this->siguiente = siguiente;
		}

		void setHijo(int hijo)
		{
			this->hijo = hijo;
		}

		void setNombre(string nombre)
		{
			this->nombre = nombre;
		}

		const string &getNombre() const
		{
			return nombre;
		}

		 Menu* &getSiguiente() 
		{
			return siguiente;
		}

		const int &getHijo() const
		{
			return hijo;
		}


};


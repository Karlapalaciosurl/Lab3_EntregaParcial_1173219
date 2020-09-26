#pragma once
#include <string>
using namespace std;


struct Nodo {
	string dato;
	Nodo* siguiente;
	
};
ref class Clase
{
	void main() {

		Nodo* lista = NULL;
		insertarlista(lista,"1N");
		insertarlista(lista,"2N");
		insertarlista(lista,"3N");
		insertarlista(lista,"4N");
		insertarlista(lista,"5N");
		insertarlista(lista,"6N");
		insertarlista(lista,"7N");
		insertarlista(lista,"8N");
		insertarlista(lista,"9N");
		insertarlista(lista,"10N");
		insertarlista(lista,"11N");
		insertarlista(lista,"12N");
		insertarlista(lista,"13N");
		insertarlista(lista,"1R");
		insertarlista(lista,"2R");
		insertarlista(lista,"3R");
		insertarlista(lista,"4R");
		insertarlista(lista,"5R");
		insertarlista(lista,"6R");
		insertarlista(lista,"7R");
		insertarlista(lista,"8R");
		insertarlista(lista,"9R");
		insertarlista(lista,"10R");
		insertarlista(lista,"11R");
		insertarlista(lista,"13R");

	}

	void insertarlista(Nodo*& lista, string dato1) {
		Nodo* nuevo_nodo = new Nodo();
		nuevo_nodo-> dato = dato1;

		Nodo* aux1 = lista;
		lista = nuevo_nodo;
		nuevo_nodo->siguiente = aux1;
		
	}
	


};


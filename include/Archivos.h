/**
	Nombres(s): Altamirnao Leal Jose ALfonso
	Nombres(s): Vázquez Jiménez Juan Manuel
	Descripcion:clase Archivos con sus metodos y atributos
	
*/
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Archivos{
public:
	struct Item{
		string Heramienta;
		int Peso;
		int Ganancia;
	}Item[100000];
	int NumItem;

	int Leer();
};
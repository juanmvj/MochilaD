/**
	Nombres(s): Altamirnao Leal Jose ALfonso
	Nombres(s): Vázquez Jiménez Juan Manuel
	
*/
#include "Solucion.h"
/**
Se resuelve el problema 
@params void
@result void
*/
void Solucion::Resuelve(){
	int j,i;
	Archivos a = Archivos();
	Dinamica b = Dinamica();
	i=a.Leer();
	j=a.NumItem;
	cout <<"La matriz es de "<<i<<" por "<<j<<"por lotanto son "<<j-1<<"Items" <<endl;

	for(int z=0;z!=j-1;z++){
		b.Ganancia[z]=a.Item[z].Ganancia;
	}for(int z=0;z!=j-1;z++){
		b.Peso[z]=a.Item[z].Peso;
	}
	b.ArmaMatriz(i,j);
	b.Mostrar(i,j);
	b.Solucion(i,j);
	int pes=0;
	cout <<"Lista de Items opttimos "<< endl;
	for(int g=0;g!=i;g++){
		if(b.MochilaSolucion[g]==1){
			cout <<a.Item[g].Heramienta<< " ";
			pes=a.Item[g].Ganancia+pes;
		}
	}
			cout << endl;
	cout <<"Ganancia optima"<<pes<< endl;
}
/**
	Nombres(s): Altamirnao Leal Jose ALfonso
	Nombres(s): Vázquez Jiménez Juan Manuel
	
*/
#include "Archivos.h"
fstream fichero;
/**
Donde leemos el archivo
@params void
@result int
*/
int  Archivos::Leer(){
	int i=6,j=0,Mochola;
    fichero.open("Mochila.txt",ios::in);
        while (! fichero.eof()){
        	if(i==6){
        		fichero >> Mochola;
        		i=0;
        	}if(i==0){
       			fichero >> Item[j].Peso;
       		}if(i==1){
       			fichero >> Item[j].Ganancia;
       		}if(i==2){
       			fichero>>Item[j].Heramienta;
       		}
       		i++;
       		if(i==3){
       			i=0;
       			j++;
       		}    
        }
    NumItem=j+1;  
    fichero.close();
    return Mochola;
}

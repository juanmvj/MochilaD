/**
	Nombres(s): Altamirnao Leal Jose ALfonso
	Nombres(s): Vázquez Jiménez Juan Manuel

	*/
#include "Dinamica.h"
/**
armamos la matriz
@params int, int
@result void
*/
void  Dinamica::ArmaMatriz(int i,int j){
	int x=0,f=j-2,ganam;
	for(int q=0;q<=j;q++){
			Mochila[0][q+1]=x;
			x++;
	}
	for(int q=0;q<=i;q++){
			Mochila[q][j+1]=0;
	}
	x=0;
	for(int q=0;q<=i;q++){
			Mochila[q][0]=x;
			x++;
	}
	for(int z=j-1;z>=1;z--){
		for(int q=1;q<=i;q++){
			if(Peso[f]<=Mochila[q][0]){
				Mochila[q][z]=Ganancia[f];
			}	
			if(Mochila[q][0]-Peso[f]>=Peso[f+1]&&Mochila[q][0]-Peso[f]!=0){
				Mochila[q][z]=(Mochila[Mochila[q][0]-Peso[f]][z+1])+Mochila[q][z];
			}
			if(Mochila[q][z]<Mochila[q][z+1]){
				Mochila[q][z]=Mochila[q][z+1];
				}
		}
		f--;
	}
}
/**
aqui se muestra
@params int, int
@result void
*/
void Dinamica::Mostrar(int i,int j){
	for(int z=0;z<=i;z++){
		for(int q=0;q<=j;q++){
			cout <<Mochila[z][q]<<"  ";
		}
		cout<<""<< endl;
	}
}
/**
le damos solucion 
@params int, int
@result void
*/
void Dinamica::Solucion(int i,int j){
	int a=1,x=0,q=0;
	while(i){
		if(Mochila[i][a]!=Mochila[i][a+1]){
			MochilaSolucion[x]=1;
			i=i-Peso[x];
			a++;
			x++;
		}else{
			a++;
			x++;
		}
	}
}
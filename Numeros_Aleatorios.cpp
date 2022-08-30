#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int numeros[6];

int numero();
void asignar();
void imprimir();


int main()
{
	srand(time(NULL));
	asignar();
	imprimir();
	return 0;
}

int numero(int num){
	for(int i=0;i<6;i++)
		if(numeros[i]==num)
			return 0;
	return 1;
}

void asignar(){
	for(int i=0;i<6;){
		int random = 1+(rand()%38);
		if (numero(random)){
			numeros[i]=random;
			i++;
		}
	}
}

void imprimir(){
	for(int i=0;i<6;i++)
		cout<<"El numero random es :"<<numeros[i]<<endl;
}
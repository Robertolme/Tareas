#include <iostream>

using namespace std;

class collatz{
	int numero, i;

public:
	collatz();
	~collatz();
	int par();
	void calculo();
	void mostrar();
};

collatz::collatz(){
	i = 0;
	while(1){
		cout<<"Dame un numero entero posistivo:";
		cin>>numero;
		if(numero>0)
			break;
	}
}

int collatz::par(){
	if(numero%2==0)
		return 1;
	return 0;
}

void collatz::calculo(){
	if(par())
		numero=numero/2;
	else 
		numero=numero*3+1;
}

void collatz::mostrar(){
	while(numero>1){
	i++;
	cout<<numero;
	if(par())
		cout<<" es par --> "<<numero<<"/2 = ";
	else 
		cout<<" es impar --> "<<numero<<"*3+1 =";
	calculo();
	cout<<numero<<endl;
	}
}

collatz::~collatz(){
	cout<<"Fin del programa:"<<i<<" ciclos"<<endl;
}

int main(){
	collatz juan;
	juan.mostrar();
	return 0;
}
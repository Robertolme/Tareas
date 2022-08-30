#include <iostream>

using namespace std;

class Triangulo{
	private:
		double base, altura;
	public:
		void leerBase();
		void leerAltura();
		double usarBase();
		double usarAltura();		
};

int main(){
	int n;
	cout<<"Cuantos triangulos?"<<endl;
	cin>>n;
	
	Triangulo objetos[n];
	
	for(int i=0; i<n;i++){
		cout<<"\nTriangulo "<<i+1<<endl;
		objetos[i].leerBase();
		objetos[i].leerAltura();
	}

	cout<<"\n  |----------------- "<<endl;
	cout<<"  |Triangulo  |area"<<endl;
	for(int i=0; i<n;i++){
		cout<<"  |----------------- "<<endl;
		cout<<"  |  "<<i+1<<"\t      |"<<(objetos[i].usarBase()*objetos[i].usarAltura())/2<<endl;
	}	
	
	return 0;
}

void Triangulo::leerBase(){
		cout<<"Cuanto vale la base?  ";
		cin>>base;
	}	
	
void Triangulo::leerAltura(){
		cout<<"Cuanto vale la Altura?   ";
		cin>>altura;
	}

double Triangulo::usarBase(){
	return base;
}

double Triangulo::usarAltura(){
	return altura;
}

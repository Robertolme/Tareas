#include <iostream>

using namespace std;

class Rectangulo{
	double largo,ancho;
	
public:
	Rectangulo(){
		largo = 1.0;
		ancho = 0.5;
	}

	Rectangulo(double _largo, double _ancho){
		largo = _largo;
		ancho = _ancho;
	}	
	
	double area();
	double perimetro();
	~Rectangulo();
	
	double getlargo();
	double getancho();
	
	void setlargo();
	void setancho();
};

double Rectangulo::area(){
	return largo * ancho;
}

double Rectangulo::perimetro(){
	return largo+largo+ancho+ancho;
}

Rectangulo::~Rectangulo(){
	cout<<"\nBorrando rectangulo"<<endl;
}

double Rectangulo::getlargo(){
	return largo; 
}

double Rectangulo::getancho(){
	return ancho; 
}

void Rectangulo::setancho(){
	cin>>ancho;
}

void Rectangulo::setlargo(){
	cin>>largo;
}

int main(){
	for(int i=1; i<3; i++){
		Rectangulo rectangulo1(3.5,2.0);
		cout<<"\nArea:"<<rectangulo1.area();
		cout<<"\nPerimetro:"<<rectangulo1.perimetro();
	}
	
	Rectangulo rectangulo2;
	cout<<rectangulo2.area()<<endl;
	cout<<rectangulo2.perimetro()<<endl;
	
	return 0;
}

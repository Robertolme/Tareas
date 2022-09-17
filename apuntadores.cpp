//ejemplo de uso de apuntadores

#include <iostream>
#include <cmath>

using namespace std; 

class funcion{
private:
	float x, h, y; 

public:
	funcion(){
		x=0.5;
		h=0.1;
		y=1.5;
	}

	float calculos(float*,float*,float*);
	void impresion();
};


int main(){
	funcion tabla;
	tabla.impresion();
	return 0;
}

float funcion::calculos(float *ptr_x, float *ptr_h,float *ptr_y){
	float res = 0;

	res=sin(*ptr_x)+cos(1+(*ptr_x * *ptr_x))+1;

	*ptr_x = *ptr_x + *ptr_h;

	return res;

}


void funcion::impresion(){
		cout<<" x \t | f(x)=sin(x)+cos(1+x²)+1"<<endl;

		while(x<y+h){
			cout<<x<<" \t |\t"<<calculos(&x,&h,&y)<<endl;
			
		}
	}
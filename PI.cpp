#include<iostream>
#include <iomanip>

using namespace std;

class PI{
	double pi;
	long int n;
public:
	PI();
	~PI();
	void calcular();
};


int main(){
	PI obj;

	obj.calcular();

	return 0;
}

PI::PI(){
	pi=3.1415926536;
	n=0;
}

void PI::calcular(){
	int j=0;
	double res=0.0, den = 1.0;
	cout<<"CALCULANDO.."<<endl;

	while(res<=pi){
		cout<<fixed<<setprecision(10)<<pi<<"="<<fixed<<setprecision(10)<<res<<" Iteracion N:"<<n<<endl; //Comentar esta linea para que le programa tarde menos tiempo
		res+=(4/den);
		den+=2;
		res-=(4/den);
		den+=2;				
		n++;
	}

	cout<<"\nPI="<<fixed<<setprecision(10)<<pi<<"\nAproximacion ="<<fixed<<setprecision(10)<<res<<endl;
}

PI::~PI(){
	cout<<"\nSe nesesitaron:"<<n<<" Ciclos"<<endl;
}

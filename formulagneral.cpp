#include <iostream>
#include <cmath>

using namespace std;

class FormulaGeneral{
    double a, b, c;
public:
    FormulaGeneral(double,double,double);
    ~FormulaGeneral();
    double get_a();
    double get_b();
    double get_c();
    double set_a();
    double set_b();
    double set_c();
    void resultado();
protected:
    double discriminate();
};

FormulaGeneral::FormulaGeneral(double _a,double _b,double _c){
    a=_a;
    b=_b;
    c=_c;
}

FormulaGeneral::~FormulaGeneral(){
    cout<<"Borrando objeto"<<endl;
}

double FormulaGeneral::get_a(){
    return a;
}
double FormulaGeneral::get_b(){
    return b;
}
double FormulaGeneral::get_c(){
    return c;
}

double FormulaGeneral::set_a(){
    cin>>a;
}

double FormulaGeneral::set_b(){
    cin>>b;
}

double FormulaGeneral::set_c(){
    cin>>c;
}

double FormulaGeneral::discriminate(){
    return ((b*b)-(4*a*c));
}

void FormulaGeneral::resultado(){


    double res1 =(-1*b)+(pow(discriminate(),0.5))*0.5;
    double res2 =(-1*b)-(pow(discriminate(),0.5))*0.5;

    if(discriminate()==0){
        cout<<"La raiz X1="<<res1<<endl;
        cout<<"La raiz X2="<<res2<<endl;
        cout<<"Raices reales iguales"<<endl;
        }
    else if(discriminate()<0){
        cout<<"Raices complejas"<<endl;
        }
    else if(discriminate()>0){
        cout<<"La raiz X1="<<res1<<endl;
        cout<<"La raiz X2="<<res2<<endl;
        cout<<"Raices reales diferentes"<<endl;
        }
}

int main(){
    system("color A");
    FormulaGeneral objeto(1,-5,6);
    objeto.resultado();
    return 0;
}

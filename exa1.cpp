#include<iostream>
#include<cmath>

using namespace std;


class Base{

protected:
    double radio;
    double Superficie(){
        return M_PI * radio * radio;
    };
public:
    Base(){
        LeerRadio();
    };
    ~Base(){};
    void LeerRadio(){
        cout<<"Dame el radio";
        cin>>radio;
    }
};

class Cono:public Base{
private:
    double altura;


public:
    Cono(){
        LeeerAltura();
    };
    ~Cono(){};

    void LeeerAltura(){
        cout<<"Dame la altura";
        cin>>altura;
    }
    double VolumenCono(){
        return (1/3.0 * altura * Superficie() );
    };

};


int main(){

    Cono obj1;


    cout<<"El volumen es:"<<obj1.VolumenCono()<<endl;

    return 0;

}

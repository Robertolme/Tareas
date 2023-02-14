#include<iostream>
#include<cmath>

using namespace std;

class Base{
private:
    int xx;
protected:
    int x;

public:
    Base();
    ~Base();
    void verBase();

    void modificarxx(){
    cout<<"\nvalor para xx:"<<endl;
    cin>>xx;
    }

    int verxx(){
        return xx;
    }

};


class Derivada:public Base{
private:
    double y;
public:
    Derivada():y(M_E){};
    ~Derivada(){};
    void verDerivada(){
        modificarxx();
        cout<<"\n Desde la derivada y="<<y<<endl;
        cout<<"\n Desde la derivada x="<<x<<endl;
         cout<<"\n Desde la derivada xx="<<verxx()<<endl;
    }
};

void Base::verBase(){
    cout<<"\n Desde la base x="<<x<<endl;
}

Base::Base():x(10),xx(9){}

Base::~Base(){}

int main (){
    Derivada obj2;

    obj2.verDerivada();
}

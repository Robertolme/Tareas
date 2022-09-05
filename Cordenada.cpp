#include<iostream>
#include<cmath>

using namespace std;

class Coordenada{
    double x,y;

public:
    Coordenada();
    ~Coordenada();
    void Salida();
protected:
    double distancia();
};

int main(){
    Coordenada Co1;

    Co1.Salida();

    return 0;
}

Coordenada::Coordenada(){
    x=y=0;
}

Coordenada::~Coordenada(){
    x=y=0;
}

double Coordenada::distancia(){
    return pow((x*x+y*y),0.5);
}

void Coordenada::Salida(){
    cout<<"Dame x:";
    cin>>x;

    cout<<"Dame y:";
    cin>>y;

    cout<<"\nLa distancia antre X y Y es:"<<distancia();
}



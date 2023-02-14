#include <iostream>

using namespace std;


class Persona{
protected:
    string nombre;
    int edad;
public:
    Persona();
    Persona(string);
    Persona(int);
    Persona(string,int);
    virtual void imprimir();
};

Persona::Persona(){
    nombre="Pedro";
    edad=25;
}

Persona::Persona(string _nombre){
    nombre=_nombre;
    edad = 35;
}

Persona::Persona(int _edad){
    nombre = "Manuel";
    edad=_edad;

}

Persona::Persona(string _nombre , int _edad){
    nombre = _nombre;
    edad=_edad;
}

void Persona::imprimir(){
    cout<<"Nombre:"<<nombre<<endl;
    cout<<"edad:"<<edad<<endl;
}

class Trabajador:public Persona{
private:
    string puesto;
public:
    Trabajador(string,int,string);
    void imprimir();
};

Trabajador::Trabajador(string _n,int _e, string _puesto):Persona(_n,_e){
    puesto=_puesto;
}

void Trabajador::imprimir(){
    Persona::imprimir();
    cout<<"Puesto:"<<puesto<<endl;
}

int main(){
    Trabajador persona1("Mario",25,"El inge");

    Persona *p[2];

    p[0] = new Trabajador("Mario",25,"El inge");


    p[0]->imprimir();

    p[1] = new Trabajador("Jose",25,"El lic");

    p[1]->imprimir();

    return 0;
}

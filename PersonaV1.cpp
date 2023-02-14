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
    void imprimir();

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

int main(){
    Persona persona1,persona2("pablo"),persona3(45),persona4("Maria",55);

    persona1.imprimir();
    persona2.imprimir();
    persona3.imprimir();
    persona4.imprimir();

    return 0;
}

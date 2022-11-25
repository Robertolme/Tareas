#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//leer desde teclado el valor de n elementos
//generar los elementos de forma aleatoria
//calcular la mediana


class Mediana{
private:
    int n;
    int *datos;

    void llenarVector();
    void ordenarVector();
    void mostrarVector();

public:
    Mediana();
    ~Mediana();
    double mediana();

};

int main(){
    srand(time(NULL));

    Mediana datos1;

    cout<<"\nLa mediana es:"<<datos1.mediana()<<endl;

    return 0;
}


void Mediana::ordenarVector(){
    int k;
    for(int i=1;i<n;i++){
    for(int j=0;j<n-i;j++){
            if(datos[j]>datos[j+1]){
                k=datos[j+1];
                datos[j+1]=datos[j];
                datos[j]=k;
                }
            }
        }

}


double Mediana::mediana() {
    if((n%2) >0){
        return datos[n/2];
    }
    if((n%2) ==0){
        double var=(((datos[(n/2)]) + (datos[(n/2)-1]))/2.);
//        if(((datos[(n/2)]) + (datos[(n/2)-1]))% 2 != 0)
//            var = var + 0.5;

        return var;
    }

}

Mediana::Mediana(){

        while(1){
            cout<<"Dame la longitud del arreglo:"<<endl;
            cin>>n;
            if(n > 1)
                break;
        }
        datos = new int[n];
        llenarVector();
        mostrarVector();
        ordenarVector();
        mostrarVector();

    }

Mediana::~Mediana(){
    delete []datos;
    cout<<"Fin del programa";
}

void Mediana::llenarVector(){
    for(int i=0;i<n;i++){
        datos[i]= 1+(rand()%9);

    }
}

void Mediana::mostrarVector(){
    for(int i=0;i<n;i++)
        cout<<datos[i]<<" ";
    cout<<"\n\n";
}

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//leer desde teclado el valor de n elementos
//generar los elemnetos de forma aleatoria
//calcular la mediana


class mediana{
private:
    int long_arr,numeros[];

public:
    mediana();
    ~mediana();
    void calcular();
    void ordenar();

};

int main(){
    srand(time(NULL));

    mediana obj;

    obj.calcular();
    
    return 0;
}


void mediana::ordenar(){
    int k;
    for(int i=1;i<long_arr;i++){
    for(int j=0;j<long_arr-i;j++){
            if(numeros[j]>numeros[j+1]){
                k=numeros[j+1];
                numeros[j+1]=numeros[j];
                numeros[j]=k;
                }
            }
        }
    for(int i=0;i<long_arr;i++)
        cout<<numeros[i]<<" ";
}


void mediana::calcular(){
    ordenar();
    if((long_arr%2) >0){
        cout<<"\n\nLa mediana es "<<numeros[long_arr/2]<<endl;
    }
    if((long_arr%2) ==0){
        float var = (numeros[(long_arr/2)]+numeros[(long_arr/2)-1])/2;
        cout<<"\n\nLa mediana es "<<var<<endl;
    }
            
}

mediana::mediana(){

        while(1){
            cout<<"Dame la longitud del arreglo:"<<endl;
            cin>>long_arr;
            if(long_arr > 1)
                break;
        }

        for(int i=0;i<long_arr;i++){
            numeros[i]= 1+(rand()%9);

        }
    }

mediana::~mediana(){
    cout<<"Fin del programa";
}

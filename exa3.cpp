#include<iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

class Base{
protected:
    int Numero[15];
public:
    Base(){
        for(int i=0;i<15;i++){
                Numero[i]=1+(rand()%99);
            }
    }
    ~Base(){};
protected:
    void mostrar(){
        cout<<"Valores iniciales\n\n\t";
        for(int i=0;i<15;i++){
            cout<<Numero[i];
            if(i!=14)
                cout<<" ,";
        }
    }
};

class Pares:public Base{
public:
    Pares(){
        Base::mostrar();
        Pares::mostrar();
    }
    ~Pares(){};
private:
    int soloPares(int a){
        if(a%2 == 0){
            return 1;
        }
        else return 0;
    };
    void mostrar(){
        cout<<"\n Solo pares";
         for(int i=0;i<15;i++){
            if(soloPares(Numero[i])){
                cout<<"\n["<<i<<"] "<<Numero[i];
            }
         }
    }

};

int main(){
    srand(time(NULL));

    Pares obj2;

}

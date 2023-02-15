#include<iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

class Base{
private:
    int Numero[15];
public:
    Base(){
        for(int i=0;i<15;i++){
                Numero[i]=1+(rand()%99);
            }
    }
    ~Base(){};
    void mostrar(){
        cout<<"Valores iniciales\n\t";
        for(int i=0;i<15;i++){
            cout<<Numero[i];
            if(i!=14)
                cout<<" ,";
        }
    }
};


int main(){
    srand(time(NULL));

    Base obj1;
    obj1.mostrar();

}

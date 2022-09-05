#include<iostream>
#include<cmath>

using namespace std;


class Serie{
    double factorial(double),vv,va,ea,elemen,x;

public:

    Serie();
    ~Serie();
    void mostrar();
};

Serie::~Serie(){

}

Serie::Serie(){
    vv = exp(0.5);
    va = ea = 0.0;
    elemen = 4;
    x=0.5;

}


double Serie::factorial(double x){
    double f=1.;
    if(x==0)
        return f;
    for(int i=1;i<=x;i++)
        f*=i;
    return f;
}

void Serie::mostrar(){
    //cout<<"\n 5!="<<factorial(5);
    cout<<"Ingresa el valor x";
    cin>>x;

    cout<<"Ingresa el numero de elementos";
    cin>>elemen;

    vv= exp(x);


    cout<<"\nval Verdadero\tval \taproximado\Error aproximado"<<endl;
    for(int i=0;i<elemen;i++){
        va +=(pow(x,i)/(factorial(i)));
        ea = (fabs((vv-va)/vv))*100;
        cout<<vv<<"\t\t"<<va<<"\t\t"<<ea<<endl;

    }
}


int main(){
    Serie s1;
    s1.mostrar();

    return 0;
}

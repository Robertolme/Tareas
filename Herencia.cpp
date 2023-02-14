#include<iostream>

using namespace std;

class Base1{
protected:
    int x1;
public:
    Base1(int _x1= 1):x1(_x1){
    return;
    }
    void impBase1(){
    cout<<x1<<endl;
    }
};

class Base2{
protected:
    double y2;
public:
    Base2(double _y2 = 2.71):y2(_y2){
    return;
    }
    void impBase2(){
    cout<<y2<<endl;
    }

};

class Derivada:public Base1,public Base2{
protected:
    double d;
    double producto(){
        return x1 * d;
    }
public:
    Derivada(double _d = 1.5,double _y=2.71,int _x=1):d(_d),Base2(_y),Base1(_x){}
    void impDerivada(){
        cout<<d<<endl;
        //cout<<producto()<<endl;
    }
    void sumaBase(){
        cout<<x1+y2<<endl;
    }

};

int main(){
    Base1 obj1;
    obj1.impBase1();

    Base2 obj2;
    obj2.impBase2();

    Derivada obj3(3,6.5,4);
    //obj3.impDerivada();
    obj3.sumaBase();
    obj3.impBase1();
    obj3.impBase2();


    return 0;
}

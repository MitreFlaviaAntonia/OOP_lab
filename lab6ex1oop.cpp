#include <iostream>
#include<math.h>
using namespace std;

class Operatii{
public:
    class NumarComplex{
        public:

    double parteaReala,parteaImaginara;

    void setparteaReala(double h){
        parteaReala=h;
    }

    void setparteaImaginara(double g){
        parteaImaginara=g;
    }

};

    double num,num1,num2;
    NumarComplex t;

Operatii(double x){
    cout<<"Constructor nr double"<<endl;
}

Operatii(NumarComplex ob)
{
    cout<<"Constructor nr complex"<<endl;
    this->num1=ob.parteaReala;
    this->num2=ob.parteaImaginara;
    cout<<"partea reala: "<<ob.parteaReala<<endl;
    cout<<"partea imaginara: "<<ob.parteaImaginara<<endl;
};

void afisare(double n){
    cout<<"Numar real: "<<n<<endl;
}

void afisare(NumarComplex ob){
    cout<<"Numar complex: "<<ob.parteaReala<<"+("<<ob.parteaImaginara<<")*i"<<endl;
}

double calculateModule(NumarComplex ob){
    double moduleComplex;
    moduleComplex=sqrt(ob.parteaReala*ob.parteaReala+ob.parteaImaginara*ob.parteaImaginara);
    return moduleComplex;
}

double calculateModule(double z){
    double moduleDouble;

    if(z<0)
        moduleDouble=(-1)*z;
    else
        moduleDouble=z;

    return moduleDouble;
}

};

int main(){

    Operatii a(2.4);
    a.t.setparteaReala(4.15);
    a.t.setparteaImaginara(5.65);
    Operatii(a.t);
    a.afisare(a.t);
    cout<<"Modul nr complex: "<<a.calculateModule(a.t)<<endl;
    a.num=-15.6;
    a.afisare(a.num);
    cout<<"Modul nr double: "<<a.calculateModule(a.num)<<endl;
}

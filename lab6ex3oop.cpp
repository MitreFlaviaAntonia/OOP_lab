#include <iostream>
#include<math.h>
using namespace std;

class Operatii{
public:

    class NumarComplex1{
    public:
    double parteaReala1,parteaImaginara1;

    void setparteaReala1(double h){
        parteaReala1=h;
    }

    void setparteaImaginara1(double g){
        parteaImaginara1=g;
    }

};

class NumarComplex2{
    public:
    double parteaReala2,parteaImaginara2;

    void setparteaReala2(double h){
        parteaReala2=h;
    }

    void setparteaImaginara2(double g){
        parteaImaginara2=g;
    }


};

    double num1a,num1b,num2a,num2b;
    NumarComplex1 t1;
    NumarComplex2 t2;

Operatii(double x,double y){
    cout<<"Constructor double"<<endl;
    this->num1a=x;
    this->num1b=y;

}

Operatii(NumarComplex1 ob1,NumarComplex2 ob2)
{
    cout<<"Constructor nr complex"<<endl;
    this->num1a=ob1.parteaReala1;
    this->num1b=ob1.parteaImaginara1;
    this->num2a=ob2.parteaReala2;
    this->num2b=ob2.parteaImaginara2;
    cout<<"partea reala 1: "<<ob1.parteaReala1<<endl;
    cout<<"partea imaginara 1: "<<ob1.parteaImaginara1<<endl;
    cout<<"partea reala 2: "<<ob2.parteaReala2<<endl;
    cout<<"partea imaginara 2: "<<ob2.parteaImaginara2<<endl;
};

NumarComplex1 AddComplex(NumarComplex1 ob1,NumarComplex2 ob2){
    double SumR,SumI;
    SumR=ob1.parteaReala1+ob2.parteaReala2;
    SumI=ob1.parteaImaginara1+ob2.parteaImaginara2;
    ob1.parteaReala1=SumR;
    ob1.parteaImaginara1=SumI;
    return ob1;
}

NumarComplex1 SubstractComplex(NumarComplex1 ob1,NumarComplex2 ob2){
    double DifR,DifI;
    DifR=ob1.parteaReala1-ob2.parteaReala2;
    DifI=ob1.parteaImaginara1-ob2.parteaImaginara2;
    ob1.parteaReala1=DifR;
    ob1.parteaImaginara1=DifI;
    return ob1;
}

NumarComplex1 MultiplyComplex(NumarComplex1 ob1,NumarComplex2 ob2){
    double ProductR,ProductI;
    ProductR=ob1.parteaReala1*ob2.parteaReala2-(ob1.parteaImaginara1*ob2.parteaImaginara2);
    ProductI=ob1.parteaReala1*ob2.parteaImaginara2+ob2.parteaReala2*ob1.parteaImaginara1;
    ob1.parteaReala1=ProductR;
    ob1.parteaImaginara1=ProductI;
    return ob1;
}

NumarComplex2 DivideComplex(NumarComplex1 ob1,NumarComplex2 ob2){
    double DivR,DivI;
    if(ob2.parteaReala2==0&&ob2.parteaImaginara2==0)
        return ob2;

    ob2.parteaReala2=(ob1.parteaReala1*ob2.parteaReala2+ob1.parteaImaginara1*ob2.parteaImaginara2)/(ob2.parteaReala2*ob2.parteaReala2+ob2.parteaImaginara2*ob2.parteaImaginara2);
    ob2.parteaImaginara2=(ob1.parteaImaginara1*ob2.parteaReala2-ob1.parteaReala1*ob2.parteaImaginara2)/(ob2.parteaReala2*ob2.parteaReala2+ob2.parteaImaginara2*ob2.parteaImaginara2);
    return ob2;
}

double AddDouble(double x,double y){
    double Sum;

    Sum=x+y;

    return Sum;
}
double SubstractDouble(double x,double y){
    double Dif;

    Dif=x-y;

    return Dif;
}
double MultiplyDouble(double x,double y){
    double Product;

    Product=x*y;

    return Product;
}
double DivideDouble(double x,double y){
    double Div;

    Div=x/y;

    return Div;
}

};

int main(){

    Operatii a(2.4,5.7);
    cout<<"Suma numerelor double: "<<a.AddDouble(a.num1a,a.num1b)<<endl;
    cout<<"Diferenta numerelor double: "<<a.SubstractDouble(a.num1a,a.num1b)<<endl;
    cout<<"Produsul numerelor double: "<<a.MultiplyDouble(a.num1a,a.num1b)<<endl;
    cout<<"Impartirea numerelor double: "<<a.DivideDouble(a.num1a,a.num1b)<<endl;

    a.t1.setparteaReala1(4.15);
    a.t1.setparteaImaginara1(5.65);
    a.t2.setparteaReala2(3.16);
    a.t2.setparteaImaginara2(8.25);

    Operatii(a.t1,a.t2);

    a.t1=a.AddComplex(a.t1,a.t2);
    cout<<"Suma numerelor complexe: "<<a.t1.parteaReala1<<"+("<<a.t1.parteaImaginara1<<"*i)"<<endl;
    a.t1=a.SubstractComplex(a.t1,a.t2);
    cout<<"Diferenta numerelor complexe: "<<a.t1.parteaReala1<<"+("<<a.t1.parteaImaginara1<<"*i)"<<endl;
    a.t1=a.MultiplyComplex(a.t1,a.t2);
    cout<<"Produsul numerelor complexe: "<<a.t1.parteaReala1<<"+("<<a.t1.parteaImaginara1<<"*i)"<<endl;
    a.t2=a.DivideComplex(a.t1,a.t2);
    cout<<"Impartirea numerelor complexe: "<<a.t2.parteaReala2<<"+("<<a.t2.parteaImaginara2<<"*i)"<<endl;

}

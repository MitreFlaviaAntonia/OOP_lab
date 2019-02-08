#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

class NumarComplex{
public:
    double parteaReala,parteaImaginara;
    int putere;
    double module;

    void setparteaReala(double x){
        parteaReala=x;
    }

    void setparteaImaginara(double y){
        parteaImaginara=y;
    }
    NumarComplex operator ^(NumarComplex);
    NumarComplex operator ~(void);

};

NumarComplex NumarComplex::operator ^(NumarComplex x){

    int i;
    NumarComplex rid;
    rid.parteaReala=x.parteaReala;
    rid.parteaImaginara=x.parteaImaginara;
    double a,b,c,d,q;
    a=x.parteaReala;
    b=x.parteaImaginara;
    c=x.parteaReala;
    d=x.parteaImaginara;

    if(x.putere==0){
        a=1;
        b=0;
    }

    for(i=2;i<=x.putere;i++){

        double q=a;
        double p=b;
        a=q*c-p*d;
        b=q*d+p*c;
    }
    rid.parteaReala=a;
    rid.parteaImaginara=b;
    return rid;
};

NumarComplex c;

NumarComplex NumarComplex::operator ~(void){

    c.module=sqrt(c.parteaReala*c.parteaReala+c.parteaImaginara*c.parteaImaginara);
    return c;

    };

int main(){

    NumarComplex t;
    NumarComplex m;
    m.setparteaReala(3);//foloseste variabila a2a pt ridicare la putere
    m.setparteaImaginara(5);//foloseste variabila a2a pt ridicare la putere
    m.putere=3;//foloseste variabila a2a pt ridicare la putere

    cout<<endl;
    cout<<"Numarul complex "<<m.parteaReala<<"+("<<m.parteaImaginara;
    cout<<")*i"<<" ridicat la puterea "<<m.putere<<" este: ";
    cout<<(t^m).parteaReala<<"+("<<(t^m).parteaImaginara<<")*i"<<endl;
    cout<<endl;

    c.parteaReala=4;
    c.parteaImaginara=-3;

    cout<<"Modulul numarului "<<c.parteaReala<<"+("<<c.parteaImaginara<<")*i este: "<<(~c).module;
    cout<<endl;
}

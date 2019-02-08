#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Oarecare{
public:

class nrcomplex{
public:
   double pr,pi;
};

int getrandom(int x){

   return rand() % x;

}

double getrandom(double w){

    int f;
    f=w;
    f=rand() %f;
    w=w+f;
    return w;

   }

nrcomplex getrandom(nrcomplex ob){

    int a,b;
    a=ob.pr;
    b=ob.pi;
    a= rand() %7;
    b= rand() %15;
    ob.pr=ob.pr+a;
    ob.pi=ob.pi+b;

    return ob;
}

};

int main(){

    Oarecare::nrcomplex m;
    m.pr=0.66;
    m.pi=9.8;
    Oarecare p;
    cout<<(p.getrandom(m)).pr<<"+("<<(p.getrandom(m)).pi<<")*i"<<endl;
    double d=5.66;
    cout<<p.getrandom(d)<<endl;
    int g=3;
    cout<<p.getrandom(g);

}

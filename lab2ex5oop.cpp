#include<iostream>
#include <math.h>
using namespace std;

    struct nrComplex{
    int a,b;
    }p;

    void Module(nrComplex p){
        float module;
        cin>>p.a;
        cin>>p.b;
        if(p.b==0)
            module=p.a;
        else
            module=sqrt(p.a*p.a+p.b*p.b);

        cout<<module<<endl;
    }

int main(){

    Module(p);
}

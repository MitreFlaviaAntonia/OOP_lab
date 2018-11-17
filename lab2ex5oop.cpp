#include<iostream>
#include <math.h>
using namespace std;

    struct nrComplex{
    int a,b;
    }p;

    float Module(nrComplex p){
        float module;
        if(p.b==0)
            if(p.a>0)
                module=p.a;
            else
                module=p.a*(-1);
        else
            module=sqrt(p.a*p.a+p.b*p.b);

        return module;
    }

int main(){

    cin>>p.a;
    cin>>p.b;
    cout<<Module(p);

}

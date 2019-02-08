// function template
#include <iostream>
#include <math.h>
using namespace std;

template <class T>
T GetMin (T a, T b) {
 T result;
 result = (a.module(a.parteaReala,a.parteaImaginara)<b.module(b.parteaReala,b.parteaImaginara))? a : b;
 return (result);
}
template <class T>
T GetMax (T a, T b) {
 T result;
 result = (a>b)? a : b;
 return (result);
}

class Complex{
public:
    double parteaReala;
    double parteaImaginara;

    double module(double parteaReala, double ParteaImaginara){
        double m;
        m=sqrt(parteaReala*parteaReala+parteaImaginara*parteaImaginara);
        return m;

    }

};

int main () {
    Complex q;
    Complex r;
    Complex t;
    int i=5, j=6, k;
    long l=10, m=5, n;
    q.parteaReala=12.6;
    q.parteaImaginara=3.5;
    r.parteaReala=121.6;
    r.parteaImaginara=31.5;
    double p1,p2,pm;
    k=GetMax<int>(i,j);
    n=GetMax<long>(l,m);
    cout << n << endl;
    cout << k << endl;
    t=GetMin<Complex>(q,r);
    cout << t.parteaReala << "+(" << t.parteaImaginara<<")*i"<<endl;

}



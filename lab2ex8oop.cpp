#include<iostream>
#include <math.h>
using namespace std;

    struct Pisica{
        int varsta;
        string nume;
        string stapan;
    };

    struct Persoana{
        int varsta;
        string nume;
        string prenume;
    };

    struct Masina{
        int varsta;
        string marca;
        string nrInmatriculare;
    };


template <typename T>

    int VarstaMin(T h,T g){
        if(h.varsta<g.varsta){
           cout<<"cea mai mica varsta este "<<h.varsta<<endl;
            cout<<false<<endl;//varstele sunt diferite
        }
        else
            if(h.varsta>g.varsta){
                cout<<"cea mai mica varsta este "<<g.varsta<<endl;
                cout<<false<<endl;//varstele sunt diferite
            }
            else
            {
                cout<<"varste egale"<<endl;
                cout<<true<<endl;//varstele sunt egale
            }
    }

int main(){

Persoana p1;

    cout << "Introduceti numele persoanei: ";
    cin >> p1.nume;
    cout << "Introduceti prenumele: ";
    cin >> p1.prenume;
    cout << "Introduceti varsta: ";
    cin >> p1.varsta;

Persoana p2;

    cout << "Introduceti numele persoanei: ";
    cin >> p2.nume;
    cout << "Introduceti prenumele: ";
    cin >> p2.prenume;
    cout << "Introduceti varsta: ";
    cin >> p2.varsta;

Pisica pi1;

    cout << "Introduceti numele pisicii: ";
    cin>>pi1.nume;
    cout << "Introduceti numele stapanului: ";
    cin>>pi1.stapan;
    cout << "Introduceti varsta: ";
    cin >> pi1.varsta;

Pisica pi2;

    cout << "Introduceti numele pisicii: ";
    cin>>pi2.nume ;
    cout << "Introduceti numele stapanului: ";
    cin>>pi2.stapan ;
    cout << "Introduceti varsta: ";
    cin >> pi2.varsta;

Masina m1;

    cout << "Introduceti marca: ";
    cin >> m1.marca ;
    cout << "Introduceti nr de Inmatriculare: ";
    cin >> m1.nrInmatriculare ;
    cout << "Introduceti varsta: ";
    cin >> m1.varsta;

Masina m2;

    cout << "Introduceti marca: ";
    cin >> m2.marca ;
    cout << "Introduceti nr de Inmatriculare: ";
    cin >> m2.nrInmatriculare ;
    cout << "Introduceti varsta: ";
    cin >> m2.varsta;

    VarstaMin(m1,m2);
    VarstaMin(p1,p2);
    VarstaMin(pi1,pi2);
}

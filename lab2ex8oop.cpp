#include<iostream>
#include <math.h>
using namespace std;

struct Pisica{
    string nume;
    string stapan;
};

struct Persoana{
    string nume;
    string prenume;
};

struct Masina{
    string marca;
    string nrInmatriculare;
};
struct Chestii{
    int varsta;
    Pisica x;
    Persoana y;
    Masina z;

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

    Chestii p1;

    cout << "Introduceti numele persoanei: ";
    cin >> p1.y.nume;
    cout << "Introduceti prenumele: ";
    cin >> p1.y.prenume;
    cout << "Introduceti varsta: ";
    cin >> p1.varsta;

    Chestii p2;

    cout << "Introduceti numele pisicii: ";
    cin >> p2.x.nume;
    cout << "Introduceti numele stapanului: ";
    cin >> p2.x.stapan;
    cout << "Introduceti varsta: ";
    cin >> p2.varsta;

    VarstaMin(p1,p2);

    Chestii p3;

    cout << "Introduceti numele persoanei: ";
    cin >> p3.y.nume;
    cout << "Introduceti prenumele: ";
    cin >> p3.y.prenume;
    cout << "Introduceti varsta: ";
    cin >> p3.varsta;

    Chestii p4;

    cout << "Introduceti marca masinii: ";
    cin >> p4.z.marca;
    cout << "Introduceti numarul de inmatriculare al masinii: ";
    cin >> p4.z.nrInmatriculare;
    cout << "Introduceti varsta: ";
    cin >> p4.varsta;

    VarstaMin(p3,p4);
}

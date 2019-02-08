#include <iostream>
using namespace std;

class Mecanism{
public:
    int codPrimit;
    string nume;
    void pornesteMecanism(){
        cout<<"Mecanismul a pornit."<<endl<<endl;
    }
};

class MasinaDeCalcul{
public:
    int operand1;
    int operand2;
    int rezultatCalcul;
    int Aduna(int x, int y){
        rezultatCalcul=x+y;
        return rezultatCalcul;
    }

    int Scade(int x, int y){
        rezultatCalcul=x-y;
        return rezultatCalcul;}
};

class Computer: public MasinaDeCalcul{
public:
    int nrBiti;
    string firma;

    void acceseazaInternet(){
        cout<<"Ati accesat internet-ul."<<endl<<endl;
    }

    void scanareComputer(){
        cout<<"Mesaj de la antivirus:"<<endl<<"         Nu s-au gasit virusi!"<<endl<<endl;
    }

};

class Robot: public Mecanism, public Computer{
public:

};

int main(){
    Robot m;
    m.pornesteMecanism();
    cout<<"Rezultat adunare: "<<m.Aduna(4,5)<<endl<<endl;
    m.acceseazaInternet();
    m.nrBiti=8;
    cout<<"Nr biti: "<<m.nrBiti<<endl<<endl;
    m.firma="Samsung";
    cout<<"Firma robot: "<<m.firma<<endl<<endl;
    m.scanareComputer();





}

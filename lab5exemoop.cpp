#include <iostream>

using namespace std;

class Persoana {
protected:
    string nume;
public:
    Persoana(string nume){
        this->nume = nume;
    }
    void afisareInformatiiPersoana(){
        cout<<"din Persoana, nume:"<<this->nume<<endl;
    }
};

class Sofer {
protected:
    string seriePermis;
public:
    Sofer(string seriePermis){
        this->seriePermis = seriePermis;
    }
    void afisareInformatiiSofer(){
        cout<<"din Sofer seriePermis:"<<this->seriePermis<<endl;
    }
};

class Angajat: public Persoana, public Sofer { // mostenire multipla
protected:
    string numeAngajator;
public:
    // constructor care utilizeaza clasele mostenite si apeleaza constructorii lor
    Angajat(string name, string seriePermis, string numeAngajator): Persoana(name), Sofer(seriePermis){
        this->numeAngajator = numeAngajator;
    }
    void afisareInformatiiAngajat(){
        cout<<"din afisareInformatiiAngajat:"<<endl;
        Persoana::afisareInformatiiPersoana();	// apelare metoda din clasa de baza
        Sofer::afisareInformatiiSofer();		// apelare metoda din clasa de baza
        cout<<"nume angajator:"<<this->numeAngajator<<endl;
    }
};

int main()
{
    Persoana *persoana = new Persoana("Ionel");
    persoana->afisareInformatiiPersoana();
    Sofer *sofer = new Sofer("abc234 67");
    sofer->afisareInformatiiSofer();

    Angajat *angajat = new Angajat("Marian", "re 564hy8f", "Microsoft");
    cout<<"apeluri din obiectul angajat"<<endl;
    angajat->afisareInformatiiPersoana();	// apelare metoda din clasa de baza
    angajat->afisareInformatiiSofer();		// apelare metoda din clasa de baza
    angajat->afisareInformatiiAngajat();
    return 0;
}

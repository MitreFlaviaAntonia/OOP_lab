#include <math.h>
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

struct node
{
    string nume1;
    int varsta1;
    int numarCopii1;
    string tipPermisAuto1;
    int salariu1;
    node *next;
};

class Persoana{
    public:

    string nume;
    int varsta;

    class Sofer{
        public:

        string tipPermisAuto;

        class Angajat{
            public:

            int salariu;

            class Parinte{
                public:

                friend class Copil;
                int numarCopii;

                node *head,*tail;
                Parinte(){
                    head = NULL;
                    tail = NULL;
                }

                void add_people(string a, int b, int c, int d, string e)
                {

                node *tmp = new node;
                tmp->nume1 = a;
                tmp->varsta1 = b;
                tmp->numarCopii1 = c;
                tmp->salariu1 = d;
                tmp->tipPermisAuto1 = e;
                tmp->next = NULL;

                if(head == NULL)
                {
                    head = tmp;
                    tail = tmp;
                }
                else
                {
                    tail->next = tmp;
                    tail = tail->next;
                }

                }

                void display_parinti(){

                    node *tmp;
                    tmp = head;

                    while (tmp != NULL){

                        cout << tmp->nume1 << " " <<tmp->varsta1<< " "<<endl;
                        cout <<"nr copii "<< tmp->numarCopii1 << " salariu ";
                        cout<< tmp->salariu1 << " tip permis auto " << tmp->tipPermisAuto1 <<endl;
                        tmp = tmp->next;
                    }
                    cout<<endl;
                }

                void display_soferi(){

                    node *tmp;
                    tmp = head;

                    while (tmp != NULL){

                        cout << tmp->nume1 << " " <<tmp->varsta1<< " "<<endl;
                        cout<< "Tip permis auto: " << tmp->tipPermisAuto1 <<endl;
                        tmp = tmp->next;
                    }
                    cout<<endl;
                }

                void display_angajati(){

                    node *tmp;
                    tmp = head;

                    while (tmp != NULL){

                        cout << tmp->nume1 << " " <<tmp->varsta1<< " "<<endl;
                        cout<<"Salariu:" << tmp->salariu1 <<endl;
                        cout<< "Tip permis auto: " << tmp->tipPermisAuto1 <<endl;
                        tmp = tmp->next;
                    }
                    cout<<endl;
                }

                void edit_nume(int pos,string a){
                    int i=0;
                    node *tmp;
                    tmp = head;

                    while (tmp != NULL&&i!=pos){

                        tmp = tmp->next;
                        i++;
                    }
                    if(i==pos){
                        tmp->nume1 = a;
                    }
                }

                void edit_varsta(int pos,int a){
                    int i=0;
                    node *tmp;
                    tmp = head;

                    while (tmp != NULL&&i!=pos){

                        tmp = tmp->next;
                        i++;
                    }
                    if(i==pos){
                        tmp->varsta1 = a;
                    }
                }

                void edit_salariu(int pos,int a){
                    int i=0;
                    node *tmp;
                    tmp = head;

                    while (tmp != NULL&&i!=pos){

                        tmp = tmp->next;
                        i++;
                    }
                    if(i==pos){
                        tmp->salariu1 = a;
                    }
                }

                void edit_tipPermisAuto(int pos,string a){
                    int i=0;
                    node *tmp;
                    tmp = head;

                    while (tmp != NULL&&i!=pos){

                        tmp = tmp->next;
                        i++;
                    }
                    if(i==pos){
                        tmp->tipPermisAuto1 = a;
                    }

                }

                void edit_numarCopii(int pos,int a){
                    int i=0;
                    node *tmp;
                    tmp = head;

                    while (tmp != NULL&&i!=pos){

                        tmp = tmp->next;
                        i++;
                    }
                    if(i==pos){
                        tmp->numarCopii1 = a;
                    }

                }

                void delete1(int pos){

                    int i=0;
                    node *tmp;
                    node *temp;
                    tmp = head;
                    temp = head;

                    if(pos==0)
                    {
                        head = temp->next;
                        delete temp;
                    }
                    else{
                        while (tmp != NULL && i != pos-1){

                            temp = temp->next;
                            i++;
                        }
                        if(i==pos-1){
                            tmp = temp->next;
                            temp->next = tmp -> next;
                            delete tmp;
                        }

                    }

                }

            };
            public:
        Parinte d;
        };
        public:
    Angajat s;
    };

    class Copil{
        public:
        node *head,*tail;
        Copil(){
            head = NULL;
            tail = NULL;
        }

        void add_Copil(string a, int b)
    {

        node *tmp = new node;

        tmp->nume1 = a;
        tmp->varsta1 = b;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }

    }

    void display_Copii()
    {
        node *tmp;
        tmp = head;

        while (tmp != NULL)
        {
            cout << tmp->nume1 << " " <<tmp->varsta1<<endl;;
            tmp = tmp->next;
        }
        cout<<endl;
    }

     void edit_nume_Copil(int pos,string a){
        int i=0;
        node *tmp;
        tmp = head;

        while (tmp != NULL&&i!=pos){

            tmp = tmp->next;
            i++;
        }
        if(i==pos){
            tmp->nume1 = a;
        }
        cout<<endl;
    }

    };

Copil x;
Sofer y;
};

int main(){

    int n;
    int i,pos,value;
    string val;
    cout<<"Numarul de copii este: ";
    cin>>n;
    cout<<endl;
    Persoana t;
    for(i=0;i<=n-1;i++){
        cout<<endl<<"Dati numele copilului: ";
        cin>>t.nume;
        cout<<endl<<"Dati varsta copilului: ";
        cin>>t.varsta;
        t.x.add_Copil(t.nume,t.varsta);
    }
    t.x.display_Copii();
    cout<<"Al catelea copil doriti sa fie editat?"<<endl;
    cin>>pos;
    cout<<"Numele copilului este: ";
    cin>>val;
    t.x.edit_nume_Copil(pos,val);
    t.x.display_Copii();

    cout<<"Numarul de parinti este: ";
    cin>>n;
    cout<<endl;
    for(i=0;i<=n-1;i++){
        cout<<endl<<"Dati numele parintelui: ";
        cin>>t.nume;
        cout<<endl<<"Dati varsta parintelui: ";
        cin>>t.varsta;
        cout<<endl<<"Dati salariul parintelui: ";
        cin>>t.y.s.salariu;
        cout<<endl<<"Dati tipul de permis auto al parintelui: ";
        cin>>t.y.tipPermisAuto;
        cout<<endl<<"Dati nr copii ai parintelui: ";
        cin>>t.y.s.d.numarCopii;
        t.y.s.d.add_people(t.nume,t.varsta,t.y.s.d.numarCopii,t.y.s.salariu,t.y.tipPermisAuto);
    }

    t.y.s.d.display_parinti();
    cout<<"Al catelea parinte doriti sa fie editat?"<<endl;
    cin>>pos;
    cout<<"Numele parintelui este: ";
    cin>>val;
    t.y.s.d.edit_nume(pos,val);
    t.y.s.d.display_parinti();

    Persoana w;

    cout<<"Numarul de angajati este: ";
    cin>>n;
    cout<<endl;

    for(i=0;i<=n-1;i++){
        cout<<endl<<"Dati numele angajatului: ";
        cin>>w.nume;
        cout<<endl<<"Dati varsta angajatului: ";
        cin>>w.varsta;
        cout<<endl<<"Dati salariul angajatului: ";
        cin>>w.y.s.salariu;
        cout<<endl<<"Dati tipul de permis auto al angajatului: ";
        cin>>w.y.tipPermisAuto;

        w.y.s.d.add_people(w.nume,w.varsta,0,w.y.s.salariu,w.y.tipPermisAuto);
    }

    w.y.s.d.display_angajati();
    cout<<"Al catelea angajat doriti sa fie editat?"<<endl;
    cin>>pos;
    cout<<"Salariul angajatului este: ";
    cin>>value;
    w.y.s.d.edit_salariu(pos,value);
    w.y.s.d.display_angajati();

    cout<<"Al catelea angajat vreti sa fie sters?"<<endl;
    cin>>pos;

    w.y.s.d.delete1(pos);
    w.y.s.d.display_angajati();

    Persoana wa;

    cout<<"Numarul de soferi este: ";
    cin>>n;
    cout<<endl;

    for(i=0;i<=n-1;i++){
        cout<<endl<<"Dati numele soferului: ";
        cin>>wa.nume;
        cout<<endl<<"Dati varsta soferului: ";
        cin>>wa.varsta;
        cout<<endl<<"Dati tipul de permis auto al soferului: ";
        cin>>wa.y.tipPermisAuto;

        wa.y.s.d.add_people(wa.nume,wa.varsta,0,0,wa.y.tipPermisAuto);
    }

    wa.y.s.d.display_soferi();

    cout<<"Al catelea sofer doriti sa fie editat?"<<endl;
    cin>>pos;
    cout<<"Tipul de permis auto al soferului este: ";
    cin>>val;

    wa.y.s.d.edit_tipPermisAuto(pos,val);
    wa.y.s.d.display_soferi();

    cout<<"Al catelea sofer vreti sa fie sters?"<<endl;
    cin>>pos;

    wa.y.s.d.delete1(pos);
    wa.y.s.d.display_soferi();
}

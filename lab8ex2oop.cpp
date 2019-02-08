#include <iostream>
using namespace std;

class Persoana{
    public:
string nume;
int varsta;
};
class Angajat:public Persoana{};

template <class T,class T1> class node
{
public:
    T data;
    T1 data1;
    node *next;
};

template <class T,class T1>class Lista
{
public:

    node<T,T1> *head;

    Lista(){

        this->head = NULL;
    }

    ~Lista(){
        cout << "LIST DELETED";
        cout<<endl;
    }

    void add_node(T info,T1 info1)
    {
        node<T,T1> *tmp = new node<T,T1>;
        tmp->data = info;
        tmp->data1 = info1;
        tmp->next = this->head;
        this->head = tmp;

    }

   void display()
    {
        node<T,T1> *head;
        head = this->head;

        while (head)
        {
            cout<<"Nume Persoana:"<<endl;
            cout << head->data.nume <<" ";
            cout<<endl;
            cout<<"Nume Angajat:"<<endl;
            cout << head->data1.nume <<endl;
            cout<<endl;
            head = head->next;
        }
        cout<<endl;
        cout<<"Sfarsit lista";
        cout<<endl;
    }

};

int main()
{
    int lung_lista,i,pos;
    string nume_student, prenume_student, nc;
    int grupa_student;
    Lista<Persoana,Angajat> var;

    Persoana x;
    Angajat y;
    x.nume="Marin";
    y.nume="Costel";

    var.add_node(x,y);

    Persoana s;
    Angajat d;
    s.nume="Cristian";
    d.nume="Bogdan";

    var.add_node(s,d);

    Persoana a;
    Angajat b;
    a.nume="Izabela";
    b.nume="Costina";

    var.add_node(a,b);
    cout<<endl;
    var.display();
    cout<<endl;
    return 0;
}


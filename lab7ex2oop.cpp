#include <math.h>
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

struct node
{
    string numeGrupa1;
    string nume1;
    string tipPermisAuto1;
    int salariu1;
    node *pointerS;
    node *next;
};

class Persoana{
    public:

    string nume;

    class Sofer{
    public:

    };

    class Student{
        public:

                node *headS,*tailS,*headG,*tailG;
                Student(){
                    headS = NULL;
                    tailS = NULL;
                    headG = NULL;
                    tailG = NULL;
                }
                friend class Sofer;
                node* getheadS(){

                    return headS;

                }

                void add_Group(string numeGrupa){

                    node *temp = new node;
                    temp->numeGrupa1 = numeGrupa;
                    temp->next = NULL;
                    if(headG == NULL)
                    {
                        headG = temp;
                        tailG = temp;
                    }
                    else
                    {
                        tailG->next = temp;
                        tailG = tailG->next;
                    }
                }

                void add_Student(string a){

                    node *tmp = new node;
                    tmp->nume1 = a;
                    tmp->next = NULL;

                    if(headS == NULL)
                    {
                        headS = tmp;
                        tailS = tmp;
                    }
                    else
                    {
                        tailS->next = tmp;
                        tailS = tailS->next;
                    }

                }

                void display_Student(){

                    node *tmp;
                    tmp = headS;

                    while (tmp != NULL){

                        cout << tmp->nume1 << " " <<endl;


                        tmp = tmp->next;
                    }
                    cout<<endl;
                }

                void display_Grupa(){

                    node *temp;
                    temp = headG;

                    while (temp != NULL){

                        cout << temp->numeGrupa1 << " " <<endl;

                        display_Student();
                        temp = temp->next;
                    }
                    cout<<endl;
                }

                void edit_nume_student(int pos,string a){

                    int i=0;
                    node *tmp;
                    tmp = headS;

                    while (tmp != NULL&&i!=pos){

                        tmp = tmp->next;
                        i++;
                    }
                    if(i==pos){
                        tmp->nume1 = a;
                    }
                }

                void edit_nume_grupa(int pos,string a){

                    int i=0;
                    node *tmp;
                    tmp = headG;

                    while (tmp != NULL&&i!=pos){

                        tmp = tmp->next;
                        i++;
                    }
                    if(i==pos){
                        tmp->numeGrupa1 = a;
                    }
                }


                void delete_student(int pos){

                    int i=0;
                    node *tmp;
                    node *temp;
                    tmp = headS;
                    temp = headS;

                    if(pos==0)
                    {
                        headS = temp->next;
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

Student x;
Student y;
Student z;
Student *f;
};

int main(){

    int n,nr;
    int i,j,pos,value;
    string ngrupa,nstudent;
    cout<<"Introduceti 3 grupe: "<<endl<<endl;
    Persoana t;

        cout<<"Numele grupei este:";
        cin>>ngrupa;
        cout<<endl;
        cout<<"Numarul de studenti este: ";
        cin>>nr;
        cout<<endl;
        for(j=0;j<=nr-1;j++){
            cout<<"Numele studentului este:";
            cin>>nstudent;
            t.x.add_Student(nstudent);
        }
        cout<<"Dati pozitia si noul nume pt studentul editat:"<<endl;
        t.x.display_Grupa();
        t.x.add_Group(ngrupa);
        t.x.display_Grupa();
        cout<<"Dupa editare: "<<endl;
        t.x.edit_nume_student(1,"iosif");
        t.x.edit_nume_grupa(0,"ANUL2");
        t.x.display_Grupa();
        t.x.delete_student(0);
        t.x.display_Grupa();

        cout<<"Numele grupei este:";
        cin>>ngrupa;
        cout<<endl;
        cout<<"Numarul de studenti este: ";
        cin>>nr;
        cout<<endl;
        for(j=0;j<=nr-1;j++){
            cout<<"Numele studentului este:";
            cin>>nstudent;
            t.y.add_Student(nstudent);
        }

        t.y.add_Group(ngrupa);
        t.y.display_Grupa();

        cout<<"Numele grupei este:";
        cin>>ngrupa;
        cout<<endl;
        cout<<"Numarul de studenti este: ";
        cin>>nr;
        cout<<endl;
        for(j=0;j<=nr-1;j++){
            cout<<"Numele studentului este:";
            cin>>nstudent;
            t.z.add_Student(nstudent);
        }

        t.z.add_Group(ngrupa);
        t.z.display_Grupa();

}

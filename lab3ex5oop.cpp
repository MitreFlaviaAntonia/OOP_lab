#include <iostream>
using namespace std;
/// 5.	Write an application to manage a list of students (class Student).
///     Data stored in class Student (class Student members) will be: first name, last name, groupe,
///     list of courses. The course will be implemented
///     through a class Course with members: courseName and teacherName. The application allows to:
/// a.	Create a list of students ✓
/// b.	Delete/Edit a student ✓
/// c.	Compute the number of students ✓
/// d.	Search for a student ✓
/// e.	Return a list of students enrolled to a course

class node
{
public:
    node *next;
    int grupa;
    string nume;
    string prenume;
    string ncurs;
    string nprofesor;
};

class Student_list
{
public:
    //int length;
    node *head;

    class Cursuri{
        public:
            string nume_curs;
            string nume_profesor;

            Cursuri(){

            }
    };

    static int countStudents;

    Student_list(){
        //this->length = 0;
        this->head = NULL;
    }

    ~Student_list(){
        cout << "LIST DELETED";
    }

    node* gethead()
    {
        return head;
    }

    void add_node(int grupa, string nume, string prenume, string ncurs, string nprofesor)
    {
        cout<<endl<<"Nr studenti creati: "<<++countStudents<<endl<<endl;

        node *tmp = new node();
        tmp->nume = nume;
        tmp->prenume = prenume ;
        tmp->grupa = grupa;
        tmp->ncurs = ncurs;
        tmp->nprofesor = nprofesor;
        tmp->next = this->head;
        this->head = tmp;

        //this->length++;
    }

   void display()
    {
        node *head;
        head = this->head;

        while (head)
        {
            cout << head->nume<<" ";
            cout << head->prenume <<endl;
            cout << "Grupa: "<<head->grupa <<endl;
            cout << "Cursul: "<<head->ncurs <<endl;
            cout << "Numele profesorului: "<<head->nprofesor <<endl<<endl;
            head = head->next;
        }
        cout<<"Sfarsit lista";
        cout<<endl;
    }

     void display_anyway(int poz)
    {
        int i;
        node *head;
        head = this->head;

        for(i=2;i<=poz;i++){
        head=head->next;
        }

        while (head)
        {
            cout << head->nume<<" ";
            cout << head->prenume <<endl;
            cout << "Grupa: "<<head->grupa <<endl;
            cout << "Cursul: "<<head->ncurs <<endl;
            cout << "Numele profesorului: "<<head->nprofesor <<endl<<endl;
            head = head->next;
        }

        cout<<endl;
    }

     void delete_head (node *before_del)
    {
        node* holder;
        int i;
        node* temp=before_del;

        if(temp!=NULL){
            holder=temp->next;
            delete temp;
            head=holder;
        }
    }

    void delete_nth (node *before_del,int poz)
    {
        int i;
        node* temp;
        for(i=2;i<=poz-1;i++){
          before_del = before_del->next;

        }
        temp = before_del->next;
        before_del->next = temp->next;
        delete temp;
    }

    void search_Student(node *before_del,int poz){
        int i;
        node *temp;
        if(poz==0)
            cout<<"Datele despre studentul cautat:"<<before_del->nume<<" "<<before_del->prenume<<" "<<before_del->grupa<<" "<<before_del->ncurs<<" "<<before_del->nprofesor<<endl<<endl;
        else
        {
            for(i=1;i<=poz-1;i++){
                before_del = before_del->next;
            }
            temp = before_del->next;
            cout<<"Datele despre studentul cautat:"<<temp->nume<<" "<<temp->prenume<<" "<<temp->grupa<<endl<<endl;
        }
    }

    void edit_grupa_Student(node *before_edit,int poz,int val){
        int i;
        node *temp;
        if(poz==0)
        {
            temp = before_edit->next;
            temp->grupa=val;
        }
        else{
            for(i=1;i<=poz-1;i++){

                before_edit = before_edit->next;
            }
            temp = before_edit->next;
            temp->grupa=val;
        }
    }

    void edit_nume_Student(node *before_edit,int poz,string value){
        int i;
        node *temp;
        if(poz==0)
        {
            temp = before_edit->next;
            temp->nume=value;
        }
        else{
            for(i=1;i<=poz-1;i++){

                before_edit = before_edit->next;
            }
            temp = before_edit->next;
            temp->prenume=value;
            }
    }

    void edit_prenume_Student(node *before_edit,int poz,string value){
        int i;
        node *temp;
        if(poz==0)
        {
            temp = before_edit->next;
            temp->prenume=value;
        }
        else{
            for(i=1;i<=poz-1;i++){

                before_edit = before_edit->next;
            }
            temp = before_edit->next;
            temp->prenume=value;
            }
    }

    void search_Students_from_course(node *before_del,string numcurs){
        int i=0;
        node *head;

        head = this->head;

        while (head)
        {
            if(head->ncurs==numcurs)
            {
                cout<<"Studentul "<<i<<" "<<head->nume<<" "<<head->prenume<<", grupa "<<head->grupa<<endl<<endl;
            }
            i++;
            head = head->next;
        }
    }

};

int Student_list::countStudents=0;

int main()
{
    int lung_lista,i,pos;
    string nume_student, prenume_student, nc;
    int grupa_student;
    Student_list::Cursuri x;
    Student_list* var=new Student_list();
    cout<<"Cati studenti?"<<endl;
    cin>>lung_lista;
    for(i=1;i<=lung_lista;i++){
        cout<<"Dati numele studentului "<<i<<": ";
        cin>>nume_student;
        cout<<"Dati prenumele studentului "<<i<<": ";
        cin>>prenume_student;
        cout<<"Dati grupa studentului "<<i<<": ";
        cin>>grupa_student;
        cout<<"Dati numele cursului studentului "<<i<<": ";
        cin>>x.nume_curs;
        cout<<"Dati profesorului studentului "<<i<<": ";
        cin>>x.nume_profesor;
        var->add_node(grupa_student,nume_student,prenume_student,x.nume_curs,x.nume_profesor);
    }

    var->display();

    cout<<"Dati pozitia nodului de la care vreti sa se afiseze lista?"<<endl;
    cin>>pos;
    var->display_anyway(pos);

    cout<<"Dati pozitia studentului pe care vreti sa il stergeti:"<<endl;
    cin>>pos;
    if(pos==0){
        var->delete_head(var->gethead());
        var->display();
    }
    else{
        var->delete_nth(var->gethead(),pos);
        var->display();
    }

    cout<<"Dati pozitia studentului pe care vreti sa il cautati:"<<endl;
    cin>>pos;
    var->search_Student(var->gethead(),pos);

    cout<<"Dati pozitia studentului pe care vreti sa il editati:"<<endl;
    cin>>pos;
    cout<<"Dati grupa noua pt studentul pe care vreti sa il editati:"<<endl;
    cin>>grupa_student;
    var->edit_grupa_Student(var->gethead(),pos,grupa_student);
    cout<<endl;
    var->display();
    cout<<endl;

    cout<<"Dati pozitia studentului pe care vreti sa il editati:"<<endl;
    cin>>pos;
    cout<<"Dati numele nou pt studentul pe care vreti sa il editati:"<<endl;
    cin>>nume_student;
    var->edit_nume_Student(var->gethead(),pos,nume_student);
    cout<<endl;
    var->display();
    cout<<endl;

    cout<<"Dati pozitia studentului pe care vreti sa il editati:"<<endl;
    cin>>pos;
    cout<<"Dati prenumele nou pt studentul pe care vreti sa il editati:"<<endl;
    cin>>prenume_student;
    var->edit_prenume_Student(var->gethead(),pos,prenume_student);
    cout<<endl;
    var->display();
    cout<<endl;

    cout<<"Dati numele cursului al carui studenti vreti sa ii vedeti: "<<endl;
    cin>>nc;

    var->search_Students_from_course(var->gethead(),nc);
    return 0;
}

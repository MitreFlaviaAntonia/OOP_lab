#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    int note;
    string name;

    Student *next;

    void setNote(int n){
        this->note = n;
    }
    int getNote(){
        return this->note;
    }
    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }
};

class Student_list
{
public:
    Student *head;

    Student_list(){
        this->head = NULL;
    }

    ~Student_list(){
        cout << "LIST DELETED";
    }

    Student* gethead()
    {
        return head;
    }

    void add_node(int note, string name)
    {
        Student *tmp = new Student();
        tmp->name = name;
        tmp->note = note;
        tmp->next = this->head;
        this->head = tmp;
    }

   void display()
    {
        Student *head;
        head = this->head;

        while (head)
        {
            cout << head->name<<" ";
            cout << "Nota: "<<head->note <<endl;
            head = head->next;
        }
        cout<<"Sfarsit lista";
        cout<<endl;
    }

    void sortStudents_note(Student *before_sort){

        int interchanged;
        Student *pointer1;
        Student *pointer2 = NULL;

        if(before_sort==NULL)
            return;

        do{

           interchanged = 0;
           pointer1 = before_sort;

           while(pointer1->next != pointer2){

                if(pointer1->note > pointer1->next->note){

                        interchange(pointer1, pointer1->next);
                        interchanged=1;
                    }
                    pointer1=pointer1->next;
            }
            pointer2=pointer1;

        }while(interchanged);
    }

    void sortStudents_name(Student *before_sort){
        int interchanged;
        Student *pointer1;
        Student *pointer2 = NULL;

        if(before_sort==NULL)
            return;

        do{

           interchanged = 0;
           pointer1 = before_sort;

           while(pointer1->next != pointer2){

                if(pointer1->name > pointer1->next->name){

                        interchange(pointer1, pointer1->next);
                        interchanged=1;
                    }
                    pointer1=pointer1->next;
            }
            pointer2=pointer1;

        }while(interchanged);

    }
    void interchange(Student *var1, Student *var2){
        int aux=var1->note;
        var1->note=var2->note;
        var2->note=aux;

        string aux2=var1->name;
        var1->name=var2->name;
        var2->name=aux2;
    }

};

int main()
{
    int lung_lista,i;
    string name_student;
    int note_student;
    Student x;
    Student *h;
    Student_list y;
    Student_list *var=new Student_list();
    cout<<"Cati studenti?"<<endl;
    cin>>lung_lista;

    for(i=1;i<=lung_lista;i++){
        cout<<"Dati numele studentului "<<i<<": ";
        cin>>name_student;
        x.setName(name_student);
        cout<<"Dati nota studentului "<<i<<": ";
        cin>>note_student;
        x.setNote(note_student);
        var->add_node(x.getNote(),x.getName());
    }
    var->display();
    y.sortStudents_note(var->gethead());
    var->display();
    y.sortStudents_name(var->gethead());
    var->display();
    return 0;
}

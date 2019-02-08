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

    Student* theNote(Student *before_the){
       int val=5;
       Student* point1=before_the;
       while(point1!=NULL){
            if(point1->note==val)
                return point1;
            point1=point1->next;
       }
       return NULL;
    }
};

int main()
{
    int lung_lista,i;
    string name_student;
    int note_student;
    Student x;

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
    if(var->theNote(var->gethead())!=NULL){
        cout<<endl<<"Primul student cu nota 5: "<<endl<<var->theNote(var->gethead())->name<<endl;
        cout<<var->theNote(var->gethead())->note<<endl;
    }
    return 0;
}

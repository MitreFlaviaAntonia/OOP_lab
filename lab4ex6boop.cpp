#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int note;
    string name;
public:
    Student(int note = 0, string name="John Doe"){
        this->note = note;
        this->name = name;
    }
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

class StudentsGroup {
private:
    int studentsNumber;
    Student *studentsList;
public:
    StudentsGroup(int studentsNumber){
        this->studentsNumber = studentsNumber;
        studentsList = new Student[studentsNumber];
    }
    void showStudentsInGroup(){
        for(int i=0; i<this->studentsNumber;i++){
            cout<<i<<" "<<studentsList[i].getName()<<" "<<studentsList[i].getNote()<<endl;
        }
    }
    void readStudentGroup(){
        int note;
        string studentName;
        for(int i=0; i<this->studentsNumber;i++){
                cout<<"student "<<i<<" name:";
                cin>>studentName;
                cout<<"note ";
                cin>>note;
                studentsList[i] = Student(note, studentName);
        }
    }

    Student *Stud5(){
        for(int i=0; i<this->studentsNumber;i++){
            if(studentsList[i].getNote()==5)
                return studentsList+i;
        }
        return NULL;
    }

};

int main()
{   Student *x;
    StudentsGroup *studentsGroup = new StudentsGroup(3);
    studentsGroup->readStudentGroup();
    studentsGroup->showStudentsInGroup();
    x=studentsGroup->Stud5();
    if(x!=NULL){
        cout<<"Primul student cu nota 5 este: "<<studentsGroup->Stud5()->getName()<<" "<<studentsGroup->Stud5()->getNote()<<endl;
    }
    return 0;
}

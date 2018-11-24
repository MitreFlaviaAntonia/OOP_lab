#include <iostream>
using namespace std;

class Student {
public:
	int grade;
	int nota;
	string nume;
	Student() {	// constructor

		grade = 10;
	}
	Student(int g) {	// constructor
		grade = g;
	}

    ~Student() {	// destuctor
	cout << "Instance destroyed !"<<endl;
	;}

	void setNota(int a) //setter
        {
            nota=a;
        }

        int getNota() //getter
        {
            return nota;
        }

    void setNume(string b) //setter
        {
            nume=b;
        }

        string getNume() //getter
        {
            return nume;
        }


};
int main(){
	Student student1;
	Student *student2;
	student2 = new Student(10);
	student1.setNota(5);
	student1.setNume("adina");
	student2->setNume("alina");
	cout<<student1.getNume()<<endl;
    cout<<student2->getNume()<<endl;
}

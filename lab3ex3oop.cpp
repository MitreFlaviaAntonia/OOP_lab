#include <iostream>
using namespace std;
///Folositi un membru variabila declarat static cu care sa numarati cite instante ale Student sunt
///create in acest moment. Adresati membrul static in constructor si destructor.
class Student {
    public:
        static int objectCount;
        int nrStudent;

        Student(int nr = 2) {

            cout << "Constructor called. Nr objects:"<<++objectCount<< endl <<endl;
            nrStudent = nr;

        }

        ~Student(){
            cout << "Destructor called. Nr objects:"<<--objectCount<< endl << endl;
        }

};

int Student::objectCount=0; //o variabila statica dintr-o clasa se initializeaza inafara clasei

int main() {
    Student Student1(3);
    Student Student2(8);
    cout << "Total objects: " << Student::objectCount << endl << endl;

    Student x;
    cout << "Total objects: " << x.objectCount << endl <<endl;

    return 0;
}


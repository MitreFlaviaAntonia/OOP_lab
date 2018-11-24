#include <iostream>
using namespace std;

class Student {
    public:
        static int objectCount;

        void counterCheck(){
            if( objectCount > 3 )//if(objectCount==4)
                cout << "More than 3 instances!!!" << endl << endl;
        }

        Student() {

            cout << "Constructor called. Nr objects:" << ++objectCount << endl << endl;
            counterCheck();
        }



        ~Student(){
            cout << "Destructor called. Nr objects:"<< --objectCount << endl << endl;
        }

};

int Student::objectCount=0;

int main() {
    Student Student1;
    Student Student2;
    Student Student3;
    //cout << "Total objects: " << Student::objectCount << endl << endl;

    Student x;
    //cout << "Total objects: " << x.objectCount << endl <<endl;

    return 0;
}

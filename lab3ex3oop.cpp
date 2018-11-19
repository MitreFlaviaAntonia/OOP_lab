#include <iostream>
using namespace std;
///Folositi un membru variabila declarat static cu care sa numarati cite instante ale Student sunt
///create in acest moment. Adresati membrul static in constructor si destructor.
class Student {
    public:
        static int objectCount;
        int somevalue;

        Student(int l = 2) {

            cout <<"Constructor called. "<<++objectCount<<endl;
            somevalue = l;

        }

        ~Student(){
            cout<<"Destructor called. "<<--objectCount<<endl;
        }

};

int Student::objectCount = 0;

int main(void) {
   Student Student1(3);
   Student Student2(8);

   cout << "Total objects: " << Student::objectCount << endl;

   return 0;
}


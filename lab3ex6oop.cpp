#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

class Student {
    private:
        static Student *instance;
        string name;
        string className;
        Student() {
            className="Student";
            name="Popescu";
        }

    public:
        static Student *getInstance() {
        if (!instance)
        instance = new Student;
        return instance;
        }


   string getName() {
      return this -> name;
   }

   void setName(string name) {
      this -> name = name;
   }

   string getclassName() {
      return this -> className;
   }

   void setclassName(string className) {
      this -> className = className;
   }

};

class Car {
private:
        static Car *instance;
        string name;
        string className;
        Car() {
            className="Car";
            name="Dacia";
        }

    public:

        static Car *getInstance() {
        if (!instance)
        instance = new Car;
        return instance;
        }

   string getName() {
      return this -> name;
   }

   void setName(string name) {
      this -> name = name;
   }

   string getclassName() {
      return this -> className;
   }

   void setclassName(string className) {
      this -> className = className;
   }

};

class Log{

    ofstream log;
public:
    void Write(string x, string y){

        log.open ("log.txt", ofstream::out | ofstream::app);

        time_t now = time(0);

        tm *ltm = localtime(&now);

        log << 1900 + ltm->tm_year<<"-"<< 1 + ltm->tm_mon<<"-"<< ltm->tm_mday<<" ";
        log << 1 + ltm->tm_hour << ":";
        log << 1 + ltm->tm_min << ":";
        log << 1 + ltm->tm_sec ;

        log<<" "<<x<<" "<<y<<endl;
        log.close();
    }
};

Student* Student::instance = 0;
Car* Car::instance = 0;

int main() {
    time_t now = time(0);
    Student* p = Student::getInstance();
    cout << p << endl;
    Student *s = s->getInstance();
    cout << s << endl;
    Log Log;

    s->setName("Ada");

    Log.Write(s->getclassName(),s->getName());

    cout << s << endl;

    s->setName("Dan");

    Log.Write(s->getclassName(),s->getName());

    Car *m=m->getInstance();

    m->setName("Mercedes");

    Log.Write(m->getclassName(),m->getName());

    return 0;
}

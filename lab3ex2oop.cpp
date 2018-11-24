#include <iostream>
using namespace std;
/// Declare a private constructor for a Student which sets a grade value to 8.
/// Use this private constructor in a public one, without parameters.
/// That is, calling constructor Student() we will have the grade 8.

class Student{

public:
	int grade;

private:
    Student(){

		    grade = 8;

        cout << "constructor of Student\n";
    }
    class Mata{
        friend class StudentFriend;
    };


};

class StudentFriend{
public:
    StudentFriend(){
        Mata a;
        cout << "constructor of StudentFriend\n";
    }
};

int main(){
    StudentFriend b;
    return 0;
}

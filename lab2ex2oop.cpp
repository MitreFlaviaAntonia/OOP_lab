#include<iostream>
#include <string.h>
#include <sstream>
using namespace std;

    struct Student{
    string nume;
    int nota;
    }x,y;

    Student Max(Student i, Student j){
        Student f;
        f.nume="test";
        f.nota=0;
        if(i.nota<j.nota)
            return j;
        else
            if(i.nota>j.nota)
                return i;
            else return f;
}

int main(){

    cout<<"Numele 1 este ";
    cin>>x.nume;
    cout<<endl;
    cout<<"Nota studentului "<<x.nume<<" este ";
    cin>>x.nota;
    cout<<endl;
    cout<<"Numele 2 este ";
    cin>>y.nume;
    cout<<endl;
    cout<<"Nota studentului "<<y.nume<<" este ";
    cin>>y.nota;
    cout<<endl;
    if(Max(x,y).nota!=0)
        cout<<Max(x,y).nume<<" "<<Max(x,y).nota;
    else
        cout<<"Studentii au note egale";
}

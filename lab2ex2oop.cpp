#include<iostream>
#include <string.h>
#include <sstream>
using namespace std;

    struct Student{
    string nume;
    int nota;
    }x,y;

    void Max(Student i, Student j){
        if(i.nota<j.nota)
            cout<<"Studentul cu nota maxima este "<<j.nume<<endl;
        else
            if(i.nota>j.nota)
                cout<<"Studentul cu nota maxima este "<<i.nume<<endl;
            else cout<<"Studentii au note egale."<<endl;
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
    Max(x,y);
}

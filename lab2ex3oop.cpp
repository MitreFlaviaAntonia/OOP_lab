#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct Lungimea{
    int numar;
    }x;
int return_length(int x){
    cout<<sizeof(x);
}
int return_length(double x){
    cout<<sizeof(x);
}
int return_length(char *x){
    cout<<strlen(x);
}
int return_length(Lungimea x){
    cout<<sizeof(x.numar);
}

int main(){
    int a=45;
    return_length(a);
    cout<<endl;
    double b=45.8;
    return_length(b);
    cout<<endl;
    char *c="Alin";
    return_length(c);
    cout<<endl;
    x.numar=700;
    return_length(x.numar);
    cout<<endl;
}

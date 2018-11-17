#include<iostream>
#include <string.h>
#include <sstream>
using namespace std;
template <typename T>
void Interchange(T&x, T&y){
T aux;

aux=x;
x=y;
y=aux;//modif var in fct

}


int main(){

int x=2;
int y=4;

Interchange(x,y);
cout<<x<<" "<<y;
}

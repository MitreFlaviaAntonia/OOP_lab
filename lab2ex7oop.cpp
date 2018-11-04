#include<iostream>
#include <string.h>
#include <sstream>
using namespace std;
template <typename T>
T Interchange(T a, T b, T aux){

aux=a;
a=b;
b=aux;
cout<<a<<" "<<b;
}

int main(){

int x=2;int y=4;int z=0;
Interchange(x,y,z);

}

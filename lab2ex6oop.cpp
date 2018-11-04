#include<iostream>
#include <string.h>
#include <sstream>
using namespace std;
template <typename T>
T Max(T a, T b, T c){
    if(a>=b&&a>=c)
        cout<<a<<endl;
    else
        if(b>=a&&b>=c)
            cout<<b<<endl;
        else
            if(c>=a&&c>=b)
                cout<<c<<endl;

}
int main(){
int v=1;
int f=1;
int e=1;
Max(v,f,e);
char *a,*b,*c;
a="alina";
b="cristina";
c="costel";
Max(a,b,c);
double q=12;
double w=14;
double r=1;
Max(q,w,r);
}

#include<iostream>
#include <string.h>
#include <sstream>
using namespace std;
template <typename T>
T Max(T a, T b, T c){
    T max;
    if(a>=b&&a>=c)
        max=a;
    else
        if(b>=a&&b>=c)
            max=b;
        else
            if(c>=a&&c>=b)
                max=c;

    return max;

}
int main(){
int v=1;
int f=2;
int e=1;
cout<<Max(v,f,e)<<endl;
char *a,*b,*c;
a="alina";
b="cristina";
c="costel";
cout<<Max(a,b,c)<<endl;
double q=12;
double w=14;
double r=1;
cout<<Max(q,w,r)<<endl;
}

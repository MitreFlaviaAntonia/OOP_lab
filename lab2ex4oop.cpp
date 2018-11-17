#include <iostream>
#include <string.h>

using namespace std;
char f(int num){
    int bin = 0, k = 1;

    while (num)
    {
        bin += (num % 2) * k;
        k *= 10;
        num /= 2;
    }

    return (bin%100000000);
}
char f(double pi){
    double pi2=pi;
    int x;
    char r;
    x=pi2;
    int counter = 0;
    for (; pi2 != x; counter++){
        pi2 *= 10;
        x=pi2;
    }

int bin = 0, k = 1;

    while (x)
    {
        bin += (x % 2) * k;
        k *= 10;
        x /= 2;
    }

    return (bin%100000000);
}

char f(char *num){
    int pos;
    pos=strlen(num)-1;
    return num[pos];
}

int main(){
    int a;
    cin>>a;
    cout<<f(a)<<endl;
    double b;
    cin>>b;
    cout<<f(b)<<endl;
    char *c="oriunde";
    cout<<f(c)<<endl;

}

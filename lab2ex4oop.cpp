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

    cout<<bin%100000000<<endl;
}
/*char f(double nr){
    double bin = 0;
    int k = 1;

    while (nr)
    {
        bin = bin + (nr % 2) * k;
        k = k * 10;
        nr /= 2;
    }
    cout<<bin%100000000<<endl;

}*/

char f(char *num){
    int pos;
    pos=strlen(num)-1;
    cout<<num[pos]<<endl;
}

int main(){
    int a=450;
    f(a);
    double b=456;
    //cout<<f(b)<<endl;
    char *c="oriunde";
    f(c);

}

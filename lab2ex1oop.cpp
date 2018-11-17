#include <iostream>
using namespace std;

float f(float n, bool isRoundedTo100=false){
    int x;
    x=n;//rotunjeste la cel mai apropiat nr intreg daca isRoundedTo100 e fals
    //cout<<isRoundedTo100<<endl;
    if(isRoundedTo100==true){//rotunjeste la cel mai apropiat nr multiplu de 100 daca isRoundedTo100 e adevarat
        if(x%100>50)
            x=(x/100+1)*100;
        else
            x=x/100*100;
    }
    n=x;
    //return n;
}

int main(){
    float number;
    bool rounded1, rounded2;
    cout<<"number=";
    cin>>number;
    rounded1=true;
    rounded2=false;
    //cout<<f(number,rounded1)<<endl;
    //cout<<f(number,rounded2)<<endl;
    f(number,rounded1);
    f(number,rounded2);

    return 0;
}

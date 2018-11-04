#include <iostream>
using namespace std;

float f(float n, bool isRoundedTo100=false){
    int x;
    x=n;//rotunjeste la cel mai apropiat nr intreg daca isRoundedTo100 e fals
    cout<<isRoundedTo100<<endl;
    if(isRoundedTo100){//rotunjeste la cel mai apropiat nr multiplu de 100 daca isRoundedTo100 e adevarat
        if(x%100>50)
            x=(x/100+1)*100;
        else
            x=x/100*100;
    }
    n=x;
    return n;
}

int main(){
    float number;
    bool rounded;
    cout<<"number=";
    cin>>number;
    cout<<"Give the value for rounded(0/1)"<<endl;;
    cout<<"rounded=";
    cin>>rounded;
    cout<<f(number,rounded);


}

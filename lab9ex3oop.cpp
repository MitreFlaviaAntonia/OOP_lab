#include <iostream>
using namespace std;

class Plant{
public:
    virtual void Grow() = 0;
};
void Plant::Grow(){
        cout<<"The plant is growing"<<endl;
}
class FoodSource{
public:
    virtual void CheckAmount() = 0;
};
void FoodSource::CheckAmount(){
    cout<<"The amount of food is large enough"<<endl;
}
class Carrot:public Plant{
public:
    void Grow(){
        cout<<"The carrot grows"<<endl;
    }
};
class Chicken:public FoodSource{
public:
    void CheckAmount(){
        cout<<"The amount of chicken is large enough"<<endl;
    }
};
class Apple:public Plant,public FoodSource{
public:
    void Grow(){
        cout<<"The apple grows"<<endl;
    }
    void CheckAmount(){
        cout<<"The amount of apples is large enough"<<endl;
    }
};

int main(){

    Plant *a;
    FoodSource *b;
    Carrot c;
    c.Grow();
    Chicken d;
    d.CheckAmount();
    Apple e;
    e.Grow();
    e.CheckAmount();

}

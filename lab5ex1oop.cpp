#include <iostream>

using namespace std;

class Form {
public:
    string color;

    string getColor(){
        return this->name;
    }
    void setColor(string color){
        this->color = color;
    }

    string name;

    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }
};

class Rectangle:public Form {
protected:
    int width;
    int height;
public:
    void setWidth(int width){
        this->width = width;
    }
    int getWidth(){
        return this->width;
    }
};

int main()
{
    Form *f = new Form();
    f->setName("forma1");
    cout<<"forma: "<<f->getName()<<endl;

    Rectangle *r = new Rectangle();
    r->setWidth(23);
    r->setName("rectangle 1");
    cout<<"rectangle name: "<<r->getName()<<" width:"<<r->getWidth()<<endl;
    r->setColor("verde");
    cout<<"rectangle color: "<<r->getColor()<<endl;

    return 0;
}

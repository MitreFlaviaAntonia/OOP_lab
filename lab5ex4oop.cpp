#include <iostream>

using namespace std;

class Form {
private:
    string color;

protected:
    string name;
    void setColor(string color)    {
        this->color = color;
    }

public:
    int side1;
    int side2;
    Form(string name){
        this->name = name;
    }
    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }
    void showMessage(){
        cout<<"mesaj din Form"<<endl;
    }
    int calculArie(){
        return side1*side2;
    }
    int calculPerimetru(){
        return 2*(side1+side2);
    }
};

class Rectangle:public Form {

public:
    int width;
    int height;
    Rectangle(string name, int width, int height) :Form(name){
        this->width = width;
        this->height = height;
    }
    void setWidth(int width){
        this->width = width;
    }
    int getWidth(){
        return this->width;
    }
    void setHeight(int height){
        this->height = height;
    }
    int getHeight(){
        return this->height;
    }
    void showMessage(){
        Form::showMessage(); // operator :: folosit pentru a apela showMessage din clasa de baza
        cout<<"mesaj din Rectangle"<<endl;
    }
    int calculArie(){
        return width*height;
    }
    int calculPerimetru(){
        return width*2+height*2;
    }
};

class Square:public Form {

public:
    int side;
    Square(string name, int side) :Form(name){
        this->side = side;
    }
    void setSide(int side){
        this->side = side;
    }
    int getSide(){
        return this->side;
    }
    void showMessage(){
        cout<<"mesaj din Square"<<endl;
    }
    int calculArie(){
        return side*side;
    }
    int calculPerimetru(){
        return side*4;
    }
};

int main()
{
    Form *f = new Form("forma1");
    cout<<"forma: "<<f->getName()<<endl;
    f->showMessage();
    f->side1=10;
    f->side2=5;
    cout<<f->calculArie()<<endl;
    cout<<f->calculPerimetru()<<endl;
    Rectangle *r = new Rectangle("rectangle 1", 10, 2);
    cout<<"rectangle name: "<<r->getName()<<" width:"<<r->getWidth()<<" height:"<<r->getHeight()<<endl;
    r->showMessage();
    cout<<r->calculArie()<<endl;
    cout<<r->calculPerimetru()<<endl;
    Square *s = new Square("square 1", 2);
    cout<<"square name: "<<s->getName()<<" side:"<<s->getSide()<<endl;
    s->showMessage();
    cout<<s->calculArie()<<endl;
    cout<<s->calculPerimetru()<<endl;
    return 0;
}

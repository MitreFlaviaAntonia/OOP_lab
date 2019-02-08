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
    virtual int calculArie()=0;


};
int Form::calculArie(){
 cerr << "Error. Area not available for this type." << endl;
}
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
        cout<<"mesaj din Rectangle"<<endl;
    }
    int calculArie(){
        return width*height;
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

};

int main()
{
    Rectangle *r = new Rectangle("rectangle 1", 10, 2);
    cout<<"rectangle name: "<<r->getName()<<" width:"<<r->getWidth()<<" height:"<<r->getHeight()<<endl;
    r->showMessage();
    cout<<r->calculArie()<<endl;

    Square *s = new Square("square 1", 2);
    cout<<"square name: "<<s->getName()<<" side:"<<s->getSide()<<endl;
    s->showMessage();
    cout<<s->calculArie()<<endl;

    return 0;
}

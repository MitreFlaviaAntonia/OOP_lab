#include <iostream>
using namespace std;

class Form {
    public:
//private:
    string color;
//protected:
    string name;
    void setColor(string color)    {
        this->color = color;
    }

    static int objectCount;
    Form(string name){
        this->name = name;
        cout<<"Constructor f called "<<++objectCount<<endl;
    }

    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }
    ~Form(){
        cout<<"Destructor Form "<<--objectCount<<endl;

    }
};

class Rectangle:public Form {
protected:
    int width;
    int height;
public:
    Rectangle(string name, int width, int height) :Form(name){
// apelul :Form(name){ poate lipsi
        this->width = width;
        this->height = height;
        cout<<"Constructor r called "<<++objectCount<<endl;

    }
    ~Rectangle(){
        cout<<"Destructor Rectangle "<<--objectCount<<endl;

    }

    void setWidth(int width){
        this->width = width;
    }
    int getWidth(){
        return this->width;
    }
};
int Form::objectCount=0;

int main()
{
    Form Form1("ceva");
    cout << "Total objects: " << Form::objectCount << endl << endl;
    Form *f = new Form("forma1");
    cout<<"forma: "<<f->getName()<<endl;
    Rectangle Rectangle1("ceva2",2,3);
    Rectangle *r = new Rectangle("rectangle 1", 1, 2);
    cout<<"rectangle name: "<<r->getName()<<" width:"<<r->getWidth()<<endl;
    cout << "Total objects: " << Form::objectCount << endl <<endl;
    delete r;
    delete f;
    return 0;


}

#include <iostream>
using namespace std;
//o clasa abstracta nu poate fi instantiata, deci
// nu se poate folosi un destructor virtual
class Weapon{
public:
    virtual void Shoot() = 0;
    virtual void Ready() = 0;
    virtual ~Weapon() = 0;
};
void Weapon::Ready(){
    cout<<"The Weapon is ready to use"<<endl;
}
void Weapon::Shoot(){
    cout<<"The Weapon shoots"<<endl;
}
Weapon::~Weapon()
{
    cout << "Pure virtual destructor is called" <<endl;
}

class Sling : public Weapon{
public:
    Weapon *var;
    ~Sling()
    {
        cout << "~Sling() is executed\n";
    }
    void Ready(){
        cout<<"The Sling is ready to use"<<endl;
    }
    void Shoot(){
        cout<<"The Sling shoots"<<endl;
    }
    void ApelMetodaDinWeapon(){
        //var->Shoot(); //not responding, similar cu a, obiect din Weapon -> Shoot()
    }
};

class AtomicBomb : public Weapon{
public:
    ~AtomicBomb()
    {
        cout << "~AtomicBomb() is executed\n";
    }
    void Ready(){
        cout<<"The AtomicBomb is ready to use"<<endl;
    }
    void Shoot(){
        cout<<"The AtomicBomb shoots"<<endl;
    }
};

class Gun : public Weapon{
public:
    virtual void Charge() = 0;
    void Ready(){
        cout<<"The Gun is ready to use"<<endl;
    }
    void Shoot(){
        cout<<"The Gun shoots"<<endl;
    }
};
void Gun::Charge(){
        cout<<"The Gun is charged"<<endl;
    }


class Rifle : public Gun{
public:
   void Ready(){
        cout<<"The Rifle is ready to use"<<endl;
    }
    void Shoot(){
        cout<<"The Rifle shoots"<<endl;
    }
    void Charge(){
        cout<<"The Rifle is charged"<<endl;
    }

};

class MachineGun : public Rifle{
public:
    void Ready(){
        cout<<"The Machine Gun is ready to use"<<endl;
    }
    void Shoot(){
        cout<<"The Machine Gun shoots"<<endl;
    }
    void Charge(){
        cout<<"The Machine Gun is charged"<<endl;
    }
};

int main(){
    Weapon *a; //Weapon a; => eroare - clasa abstracta
    //a->Shoot(); //not responding - nu se poate apela o metoda pur virtuala din clasa abstracta
    //a->Ready(); //not responding - nu se poate apela o metoda pur virtuala din clasa abstracta
    Sling b;
    b.ApelMetodaDinWeapon();
    Sling *x=new Sling();
    a=x;
    a->Shoot();
    AtomicBomb c;
    Gun *d;
    Rifle e;
    MachineGun f;

    //a->Ready();
    b.Ready();
    c.Ready();
    //d->Ready();
    e.Ready();
    f.Ready();

    //a->Shoot();
    b.Shoot();
    c.Shoot();
    //d->Shoot();
    e.Shoot();
    f.Shoot();


return 0;
}

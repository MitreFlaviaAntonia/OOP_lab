#include <iostream>
using namespace std;

class Desert{
public:
    string nume;
    int nrCalorii;

    Desert(){
        nume="dulciuri";
        nrCalorii=600;
    }

    void setnume(string a){
        nume=a;
    };
    string getnume(){
        return nume;
    };
    void setnrCalorii(int b){
        nrCalorii=b;
    };
    int getnrCalorii(){
        return nrCalorii;
    };

    void modPreparare(){
        cout<<"Cumparati ingredientele si apoi executati reteta pt desert"<<endl;
    }
};

struct node
{
    string denumire;
    node *next;
};

class Prajitura:public Desert{
public:
    string forma;
    void modPreparare(){
        cout<<"Cumparati ingredientele si apoi executati reteta pt prajitura"<<endl;
    }
    class Ingrediente{

    private:
        node *head,*tail;

    public:

        Ingrediente()
        {
            head = NULL;
            tail = NULL;
        }

        void setIngrediente(string n)
        {
            node *tmp = new node;

            tmp->denumire = n;
            tmp->next = NULL;

            if(head == NULL)
            {
                head = tmp;
                tail = tmp;
            }
            else
            {
                tail->next = tmp;
                tail = tail->next;
            }

        }

        void displayIngrediente()
        {
            node *tmp;
            tmp = head;
            cout<<"NULL->";
            while (tmp != NULL)
            {
                cout << tmp->denumire <<"->";
                tmp = tmp->next;
            }
            cout<<"NULL";
            cout<<endl<<endl;
        }

    };


};

class Tort:public Desert{
public:
    void modPreparare(){
        cout<<"Cumparati ingredientele si apoi executati reteta pt tort"<<endl;
    }

    class Ingrediente{

    private:
        node *head,*tail;

    public:

        Ingrediente()
        {
            head = NULL;
            tail = NULL;
        }

        void setIngrediente(string n)
        {
            node *tmp = new node;

            tmp->denumire = n;
            tmp->next = NULL;

            if(head == NULL)
            {
                head = tmp;
                tail = tmp;
            }
            else
            {
                tail->next = tmp;
                tail = tail->next;
            }

        }

        void displayIngrediente()
        {
            node *tmp;
            tmp = head;
            cout<<"NULL->";
            while (tmp != NULL)
            {
                cout << tmp->denumire <<"->";
                tmp = tmp->next;
            }
            cout<<"NULL";
            cout<<endl<<endl;
        }

    };
};

class Briosa:public Prajitura{
public:
    string forma;
    void setforma(string x){
        forma=x;
    }
    string getforma(){
        return forma;
    }
};

int main()
{

    Prajitura::Ingrediente a;
    a.setIngrediente("unt");
    a.setIngrediente("zahar");
    a.setIngrediente("cacao");
    a.setIngrediente("faina");
    a.setIngrediente("lapte");

    a.displayIngrediente();

    Tort::Ingrediente b;
    b.setIngrediente("oua");
    b.setIngrediente("faina");
    b.setIngrediente("frisca");
    b.setIngrediente("glazura");
    b.setIngrediente("visine");

    b.displayIngrediente();
    Desert f;
    Prajitura g;
    Tort h;
    f.modPreparare();
    g.modPreparare();
    h.modPreparare();
    Briosa d;
    d.setforma("rotunda");
    cout<<d.getforma()<<endl;
    cout<<"Din constructorul Desert:"<<endl;
    cout<<"nume: "<<f.nume<<", numar calorii: "<<f.nrCalorii<<endl;
    f.nume="ecler";
    f.nrCalorii=150;
    cout<<"nume: "<<f.nume<<", numar calorii: "<<f.nrCalorii<<endl;
    h.setnume("diplomat");
    cout<<h.getnume()<<endl;
    return 0;
}


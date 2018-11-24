#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class Student_list
{
private:
    node *head,*tail;

public:
    static int countStudents;
    Student_list()
    {
        head = NULL;
        tail = NULL;

    }

    void add_node(int n)
    {
        cout<<"Nr studenti creati: "<<++countStudents<<endl;
        node *tmp = new node;

        tmp->data = n;
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


    void display()
    {
        node *tmp;
        tmp = head;
        cout<<"NULL->";
        while (tmp != NULL)
        {
            cout << tmp->data <<"->";
            tmp = tmp->next;
        }
        cout<<"NULL";
        cout<<endl;
    }

    void display_anyway(int n)
    {
        int i;
        node *tmp;
        tmp = head;
        if(n==0)
        {
            cout<<"NULL->";
        }
        for(i=2;i<=n;i++){
        tmp=tmp->next;
        }


        while (tmp != NULL)
        {
            cout << tmp->data <<"->";
            tmp = tmp->next;
        }
        cout<<"NULL";
        cout<<endl;
    }

    void delete_node(int n){
        cout<<"Nr studenti existenti: "<<--countStudents<<endl;
        //stergere noduri
    }


};
int Student_list::countStudents=0;

int main()
{
    int val;

    Student_list a;
    a.add_node(1);
    a.add_node(2);
    a.add_node(3);
    a.add_node(4);
    a.add_node(5);
    cout<<endl<<"Nr studenti: "<<Student_list::countStudents<<endl;
    Student_list x;
    cout<<endl<<"Nr studenti: "<<x.countStudents<<endl;
    cout<<endl;
    a.display();
    cout<<endl;
    cout<<"Dati pozitia de la care vreti sa se afiseze lista"<<endl;
    cout<<endl;
    cin>>val;
    cout<<endl;
    a.display_anyway(val);
    cout<<endl;
    a.delete_node(1);
    a.delete_node(2);
    a.delete_node(3);
    a.delete_node(4);
    a.delete_node(5);
    return 0;
}



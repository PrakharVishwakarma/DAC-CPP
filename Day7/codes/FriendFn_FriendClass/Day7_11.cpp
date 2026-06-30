#include<iostream> 
using namespace std; 
class Node 
{
    int data; 
    Node *next; 
    public: 
    Node(int value)
    {
        this->data = value; 
        this->next = NULL; 
    }
    friend class List; 
}; 
class List 
{
    private: 
    Node *head; 
    public: 
    List( void )
    {
        head = NULL; 
    }
    void addLast(int value)
    {
        Node *newnode = new Node(value); 
        if(head == NULL)
        {
            head = newnode; 
        }
        else 
        {
            Node *trav = head; 
            while(trav->next!=NULL)
            {
                trav = trav->next; 
            } 
            trav->next = newnode; 
        }
    }
    void delFirst( void )
    {
        if(head!=NULL)
        {
            Node *temp = head; 
            head = head->next; 
            delete temp; 
            temp = NULL; 
        }
        else 
          cout<<"List is empty"<<endl; 
    }
    void displayList( void )
    {
        if(head!=NULL)
        {
            Node *trav = head; 
            while(trav!=NULL)
            {
                cout<<trav->data<<"->"; 
                trav = trav->next; 
            }
            cout<<"NULL"; 
        }
        else 
          cout<<"List is empty"<<endl; 
    }
    ~List( )
    {
        while(head!=NULL)
        {
            delFirst( ); 
        }
    }
}; 
int main()
{
    List l1; 
    l1.addLast(10); 
    l1.addLast(20); 
    l1.addLast(30); 
    l1.displayList( ); 
    cout<<endl; 
    l1.delFirst( ); 
    l1.displayList( ); 
    return 0;
}


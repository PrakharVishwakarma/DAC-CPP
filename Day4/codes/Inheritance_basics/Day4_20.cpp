#include<iostream> 
using namespace std; 

class Person 
{
    private: 
    string name; //24 bytes 
    int age; // 4 bytes 
    public:
    static int count;  
    Person( void ) : name("") , age(0)
    {   }
    Person(string name , int age) : name(name) , age(age)
    {   }
    static void f1( )
    {
        cout<<"static void f1( )"<<endl; 
    }
    void displayRecord( void )
    {
        cout<<"Name : "<<name<<endl; 
        cout<<"Age : "<<age<<endl;  
    }
}; 
int Person :: count = 100; 
class Employee : public Person  
{
    private: 
    //string name;//24 
    //int age; //4 
    int empid; //4
    float salary;//4  
    public: 
    Employee(void ) : empid(0) , salary(0.0)
    {   }
    Employee(string name, int age , int empid , double salary) : empid(empid) , salary(salary) 
    {   }
    void showRecord( void )
    {
        //cout<<"Name : "<<name<<endl; 
        //cout<<"Age : "<<age<<endl; 
        cout<<"Empid : "<<empid<<endl; 
        cout<<"Salary : "<<salary<<endl; 
    }
}; 
int main()
{
    //Person::f1( ); //Base class
    Employee::f1( ); // Derived class 
    return 0;
}

int main1()
{
    //cout<<Person::count<<endl; 
    //cout<<Employee::count<<endl; 
    return 0; 
}


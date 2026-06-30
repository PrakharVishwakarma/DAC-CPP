#include<iostream> 
using namespace std; 
class Person  // Base class / parent class 
{
    private: 
    string name; 
    int age; 
    public: 
    Person( void ) : name("") , age(0)
    {   
        cout<<"Person( void )"<<endl; 
    }
    Person(string name , int age ) : name(name) , age(age)
    {   
        cout<<"Person(string name , int age )"<<endl; 
    }
    void showRecord( void )
    {
        cout<<"Name : "<<name<<endl; 
        cout<<"Age : "<<age<<endl; 
    }
    ~Person( )
    {
        cout<<"~Person( )"<<endl; 
    }
}; 
class Employee : public Person  // Derived class / child class 
{
    private: 
    //string name; 
    //int age; 
    int empid; 
    float salary; 
    public: 
    Employee( void ) : empid(0) , salary(0.0)
    {   
        cout<<"Employee( void ) "<<endl; 
    }
    Employee(string name , int age , int empid , float salary) : empid(empid) , salary(salary) , Person(name,age)
    {   
        cout<<"Employee(string name , int age , int empid , float salary)"<<endl; 
    }

    /*
    void showRecord( void )
    {
        cout<<"Name : "<<name<<endl; 
        cout<<"Age : "<<age<<endl; 
    }*/ 
    
    // this = &e2 
    void displayRecord( void )
    {
        //this->Person::showRecord( ); 
        Person::showRecord( ); 
        cout<<"Empid : "<<empid<<endl; 
        cout<<"Salary : "<<salary<<endl; 
    }
    ~Employee( )
    {
        cout<<"~Employee( )"<<endl; 
    }
}; 
int main()
{
    Employee *emp = new Employee("Nilesh",31,1,1000.00); 
    delete emp; 
    return 0;
}

int main3()
{
    Employee *emp = new Employee( );
    delete emp;  
    return 0;
}

int main2()
{
    Person *p = new Person("Nilesh",31); 
    delete p; 
    return 0;
}

int main1()
{
    Person *p = new Person( ); 
    delete p; 
    p = NULL; 
    return 0;
}

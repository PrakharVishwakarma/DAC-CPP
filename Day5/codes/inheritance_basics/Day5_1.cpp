#include<iostream> 
using namespace std; 
class Person  // Base class / parent class 
{
    private: 
    string name; 
    int age; 
    public: 
    Person( void ) : name("") , age(0)
    {   }
    Person(string name , int age ) : name(name) , age(age)
    {   } 
    void showRecord( void )
    {
        cout<<"Name : "<<name<<endl; 
        cout<<"Age : "<<age<<endl; 
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
    {   }
    Employee(string name , int age , int empid , float salary) : empid(empid) , salary(salary)
    {   }

    /*
    void showRecord( void )
    {
        cout<<"Name : "<<name<<endl; 
        cout<<"Age : "<<age<<endl; 
    }*/ 
   
    void displayRecord( void )
    {
        cout<<"Empid : "<<empid<<endl; 
        cout<<"Salary : "<<salary<<endl; 
    }
}; 
int main()
{
    Employee e1("Nilesh",31,1,1000.00); 
    //e1.displayRecord( ); //Employee::displayRecord( ); 
    e1.Person::showRecord( ); 
    return 0;
}

int main1()
{
    Person p1("Nilesh",31);
    //p1.showRecord( ); // Person::showRecord( );  
    //p1.Employee::displayRecord( ); 
    return 0;
}

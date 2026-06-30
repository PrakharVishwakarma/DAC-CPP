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
        
    }
    Person(string name , int age ) : name(name) , age(age)
    {   
        
    }
    void printRecord( void )
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
    {   
        
    }
    Employee(string name , int age , int empid , float salary) : empid(empid) , salary(salary) , Person(name,age)
    {   
        
    }

    /*
    void showRecord( void )
    {
        cout<<"Name : "<<name<<endl; 
        cout<<"Age : "<<age<<endl; 
    }*/ 
    
    // this = &e2 
    void printRecord( void )
    {
        Person :: printRecord( );  
        cout<<"Empid : "<<empid<<endl; 
        cout<<"Salary : "<<salary<<endl; 
    }
    
}; 
int main()
{
    Employee e1("Nilesh",31,1,1000.00); 
    e1.printRecord( ); // Employee::printRecord(); 
    return 0;
}

int main1()
{
    Person p1("Nilesh",31); 
    p1.printRecord( ); //  Person::printRecord(); 
    return 0;
}

/*

    class A 
    {
        private: 
        int a; 
        protected: 
        int b; 
        public: 
        int c; 
    }
    class B : protected A 
    {
    
    }
    class C : protected B 
    {

    }

*/
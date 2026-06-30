#include<iostream> 
using namespace std; 
class Date
{
    private: 
    int day; 
    int month; 
    int year; 
    public: 
    Date( void ) : day(0) , month(0) , year(0)
    {   }
    Date(int day, int month , int year) : day(day) , month(month) , year(year)
    {   }
    void acceptDate(void )
    {
        cout<<"Day : "; 
        cin>>day;
        cout<<"Month : "; 
        cin>>month; 
        cout<<"Year : "; 
        cin>>year;
    }
    void printDate( void )
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl; 
    }
}; 
class Employee
{
    private: 
    string name; 
    int empid; 
    double salary;
    Date joinDate; // Association(Tight Coupling)
    public: 
    Employee(void) : name("") , empid(0) , salary(0.0)
    {   }
    Employee(string name , int empid , double salary) : name(name) , empid(empid),salary(salary)
    {   }
    Employee(string name , int empid , double salary , Date joinDate) : name(name) , empid(empid) , salary(salary) , joinDate(joinDate)
    { }
    Employee(string name , int empid, double salary , int day , int month , int year) : name(name) , empid(empid) ,salary(salary) , joinDate(day,month,year) 
    { }
    void acceptEmployee( void )
    {
        cout<<"Name : "; 
        cin>>name; 
        cout<<"Empid : "; 
        cin>>empid; 
        cout<<"Salary : "; 
        cin>>salary; 
        this->joinDate.acceptDate( ); 
    }
    void printEmployee( void)
    {
        cout<<"Name : "<<name<<endl; 
        cout<<"Empid : "<<empid<<endl;
        cout<<"Salary : "<<salary<<endl; 
        this->joinDate.printDate( );  
    }
}; 
class Customer 
{
    private: 
    int id; 
    string name; 
    Date *dob; // Association(Loose Coupling)
    public: 
    Customer( void ) : id(0) , name("")
    {
        dob = NULL; 
    }
    Customer(string name , int id) : name(name) , id(id)
    {
        dob = NULL; 
    }
    Customer(string name , int id , int day , int month , int year) : Customer(name,id)
    {
        dob = new Date(day,month,year); 
    }
    void acceptDate( )
    {
        dob = new Date( ); 
        dob->acceptDate(); 
    }
    void acceptCustomer( )
    {
        cout<<"Name : "; 
        cin>>name; 
        cout<<"Id : "; 
        cin>>id; 
    }
    void printCustomer( )
    {
        cout<<"Name : "<<name<<endl; 
        cout<<"Id : "<<id<<endl; 
        if(dob!=NULL)
        {
            dob->printDate(); 
        }
    }
    ~Customer( void )
    {
        if(dob!=NULL)
        {
            delete dob; 
            dob = NULL; 
        }
    }
}; 
int main(int argc, char const *argv[])
{
    Customer c1("Ketan",1,1,1,2000); 
    c1.printCustomer( ); 
    return 0;
}

int main1()
{
    Customer c1; 
    c1.acceptCustomer( ); 
    c1.acceptDate( ); 
    c1.printCustomer( ); 
    return 0;
}



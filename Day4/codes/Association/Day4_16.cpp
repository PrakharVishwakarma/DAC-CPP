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
    Date joinDate; // Association  
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
int main()
{
    Employee e; 
    e.acceptEmployee( ); 
    e.printEmployee( ); 
    return 0;
}

int main3(int argc, char const *argv[])
{
    Employee e("Ketan",1,1000,1,1,2000); 
    e.printEmployee( ); 
    return 0;
}

int main2(int argc, char const *argv[])
{
    Date dt1(1,1,2000); 
    Employee e("Ketan" ,1,1000.00,dt1); 
    e.printEmployee( ); 
    return 0;
}

int main1(int argc, char const *argv[])
{
    Employee e1("Ketan",1,1000.00); 
    e1.printEmployee( ); 
    
    
    return 0;
}

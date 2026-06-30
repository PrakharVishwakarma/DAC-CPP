#include<iostream> 
using namespace std; 
class Employee 
{
    //data-members 
    private: 
    char name[20]; 
    int empid; 
    float salary; 
    public: 
    void acceptRecord( void  )
    {
        cout<<"Name : "; 
        cin>>name; 
        cout<<"Empid : "; 
        cin>>empid; 
        cout<<"Salary : "; 
        cin>>salary; 
    }
    void printRecord( void )
    {
        cout<<"Name : "<<name<<endl; 
        cout<<"Empid :"<<empid<<endl; 
        cout<<"Salary : "<<salary<<endl; 
    }
}; 
int main()
{
    Employee emp; 
    emp.acceptRecord( ); 
    emp.printRecord( ); 
    return 0;
}

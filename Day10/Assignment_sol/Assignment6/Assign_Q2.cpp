#include<iostream>
using namespace std;

class Employee
{
    protected:          //Kept protected so that accessible 
                int id;
                double salary;
    public:

            Employee()
            {
                id=0;
                salary=0;
            }
            Employee(int id,double salary)
            {
                this->id=id;
                this->salary=salary;
            }
            void setId(int id)      //Setter
            {
                this->id=id;
            }
            void setSalary(double salary)   //Setter
            {
                this->salary=salary;
            }
            double getSalary()          //Getter
            {
                return salary;
            }
            
            void accept()   
            {
                cout<<"Enter id: ";
                cin>>id;
                cout<<"Enter Salary: ";
                cin>>salary;
            }
            void display()
            {
                cout<<"ID: "<<id<<endl;
                cout<<"Salary: "<<salary<<endl;
                
            }


};

class Manager: virtual public Employee   //Virtual Base Class/Virtual Inheritance to Solve diamond Problem
{

    protected:
             double bonus;
    
    public:
            Manager()
            {
                bonus=0;
            }
            Manager(double bonus)   
            {
                this->bonus=bonus;
            }
            Manager(int id,double salary,double bonus): Employee(id,salary)
            {
                this->bonus=bonus;

            }
            void setBonus(double bonus)     //Mutator or Setter
            {
                this->bonus=bonus;
            } 
            double getBonus()       //Inspector or Getter
            {
                return bonus;
            }

            void accept()
            {
                Employee::accept();
                cout<<"Enter Bonus: ";
                cin>>bonus;
            }
            void display()
            {
                Employee::display();
                cout<<"Bonus="<<bonus<<endl;
            }
            void acceptManager()
            {
                Employee::accept();
                accept();
            }
            void displayManager()
            {
                Employee::display();
                display();

            }
};

class Salesman: virtual public  Employee
{
protected:
    double commission;

public:

    Salesman()
    {
        commission=0;
    }
    Salesman(int id,double salary,double commission):Employee(id,salary)
    {
            this->commission=commission;
    }
    void setCommision(double commission)
    {
        this->commission=commission;

    }
    double getCommision()   //Getter
    {
      return commission;

    }
    void accept()        
    {
        Employee::accept();     //as name are same so to differentiate we are using ::
        cout<<"Enter commission: ";
        cin>>commission;
    }
    void display()
    {
        Employee::display();
        cout<<"Commission: "<<commission<<endl;

    }
    void acceptSaleman()
    {
        Employee::accept();
        accept();
    }
    void displaySalesman()
    {
        Employee::display();
        display();
    }

};

class SalesManager:public Manager,public Salesman   //Multiple Inheritance
{

public:
    SalesManager()
    {

    }

    SalesManager(int id,double salary,double bonus,double commission):Salesman(id,salary,commission)
    ,Manager(bonus)
    {      

    }

    void accept()
    {
         Employee::accept();
         cout<<"Enter Commission: ";
         cin>>commission;
         cout<<"Enter Bonus: ";
         cin>>bonus;
         
    }
    void display()
    {
        Employee::display();
        cout<<"Commission: "<<commission<<endl;
        cout<<"Bonus: "<<bonus<<endl;
        
    }

};

int main()
{

    //Testing all the functionality

    //Parameterless of Employee
    Employee e1;
    cout<<"Employee"<<endl;
    e1.accept();
    cout<<endl;


    cout<<"Employee 1: "<<endl;
    e1.display();
    cout<<endl;

    //Parameterized of Employee
    Employee e2(2,20000);
    cout<<"Employee 2: "<<endl;
    e2.display();
    cout<<endl;

    //Parameterless of Manager
    Manager m1;
    cout<<"Manager"<<endl;
    m1.accept();
    cout<<endl;
    cout<<"Manager 1: "<<endl;
    m1.display();
    cout<<endl;

    //Parameterized of Manager
    Manager m2(4,20000,200);
    cout<<"Manager 2: "<<endl;
    m2.display();
    cout<<endl;

    //Parameterless of Salesman
    Salesman s1;
    cout<<"Salesman"<<endl;
    cout<<endl;
    s1.accept();
    cout<<endl;
    cout<<"Salesman 1: "<<endl;
    s1.display();
    cout<<endl;

    //Parameterized of Salesman
    Salesman s2(6,6500,2900);
    cout<<endl;
    cout<<"Salesman 2: "<<endl;
    s2.display();
    cout<<endl;

    
    //Parameterless of SalesManager
    SalesManager sm1;
    cout<<"SalesManager"<<endl;
    cout<<endl;
    sm1.accept();
    cout<<endl;
    cout<<"SalesManager 1: "<<endl;
    sm1.display();
    cout<<endl;

    //Parameterized of SalesManager
    SalesManager sm2(1,85000,3000,2500);
    cout<<endl;
    cout<<"SalesManager 2: "<<endl;
    sm2.display(); 
    return 0;
}
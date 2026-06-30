#include<iostream> 
#include<fstream> 
#include<sstream>
using namespace std; 
class Employee
{
    private: 
    int id; 
    string name; 
    double salary; 
    public: 
    Employee( void ) : id(0) , name("") , salary(0.0)
    {   }
    Employee(int id , string name , double salary) : id(id) , name(name) , salary(salary)
    {   }
    void accept( void  )
    {
        cout<<"Id : "; 
        cin>>id; 
        cout<<"Name : "; 
        cin>>name; 
        cout<<"Salary : "; 
        cin>>salary; 
    }
    void display( void )
    {
        cout<<"Id : "<<id<<endl; 
        cout<<"Name : "<<name<<endl;
        cout<<"Salary : "<<salary<<endl; 
    }
    int getId( void )
    {
        return this->id; 
    }
    string getName( void )
    {
        return this->name; 
    }
    double getSalary( void )
    {
        return this->salary; 
    }
}; 
void write( void )
{
    ofstream fout("file2.txt",ios::app); 
    Employee e1; 
    e1.accept( ); // 1 "Nilesh" 1000 
    // fout<<e1.getId()<<","<<e1.getName()<<","<<e1.getSalary()<<endl; 

    // To store the whole object in the file we can use the binary mode of file handling. 
    // fout.write((char*)&e1,sizeof(e1));
    fout.close( ); 
}
void read( )
{
    ifstream fin("file2.txt"); 
    string line; 
    while(getline(fin,line))
    {
        stringstream data(line); 
        //"1,Nilesh,1000"
        string id , name , salary; 
        getline(data,id,','); //"1"
        getline(data,name,',');//"Nilesh"
        getline(data,salary,','); //"1000"
        Employee emp(stoi(id),name,stod(salary)); 
        emp.display( ); 
    }
    fin.close(); 
}
int main()
{
    //write( ); 
    read( ); 
    return 0;
}

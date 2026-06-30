#include<iostream> 
using namespace std; 
class Student 
{
    private: 
    string name;
    int roll; 
    double marks; 
    public: 
    Student( void ) : name("") , roll(0) , marks(0.0)
    {   }
    Student(string name , int roll , double marks) : name(name) , roll(roll) , marks(marks)
    {   } 
    void accept( void )
    {
        cout<<"Name : "; 
        cin>>name; 
        cout<<"Roll : "; 
        cin>>roll; 
        cout<<"Marks : "; 
        cin>>marks; 
    }
    void display( )
    {
        cout<<"Name : "<<name<<endl; 
        cout<<"Roll : "<<roll<<endl; 
        cout<<"Marks : "<<marks<<endl; 
    }
}; 
int main()
{
    Student **ptr = new Student*[2]; 
    ptr[0] = new Student("Nilesh",1,66.66); 
    ptr[1] = new Student("Rahul",2,77.77); 
    for(int index = 0 ; index < 2 ; index++)
    {
        ptr[index]->display( ); 
    }
    for(int index = 0 ; index < 2 ; index++)
    {
        delete ptr[index]; 
        ptr[index] = NULL;  
    }
    delete[] ptr; 
    ptr = NULL; 
    return 0;
}

int main3()
{
    Student *arr = new Student[2]; 
    for(int index = 0 ; index < 2 ; index++)
    {
        arr[index].accept( ); 
    }
    for(int index = 0 ; index < 2 ; index++)
    {
        arr[index].display( ); 
    }
    delete[] arr; 
    arr = NULL; 
    return 0;
}

int main2()
{
    Student *arr[2]; //array of pointers 
    arr[0] = new Student("Ketan",1,55.55);
    arr[1] = new Student("Nilesh",2,65.55);
    for(int index = 0 ; index < 2 ; index++)
    {
        arr[index]->display( ); 
    } 
    for(int index = 0 ; index < 2 ; index++)
    {
        delete arr[index]; 
        arr[index ] = NULL;    
    }
    return 0;
}

int main1()
{
    Student arr[2]; //array of objects 
    for(int index = 0 ; index< 2 ; index++)
    {
        arr[index].accept( ); 
    }
    for(int index = 0 ; index < 2 ; index++)
    {
        arr[index].display( ); 
    }
    return 0;
}

#include<iostream> 
using namespace std;

template<typename T> 

void swap_object(T *a , T *b)
{
    T temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
}
class Student 
{
    private: 
    int roll; 
    string name; 
    public: 
    Student() : roll( 0) , name("")
    {   }
    Student(int roll , string name) : roll(roll) , name(name)
    {   }
    void printRecord(void)
    {
        cout<<"Roll : "<<roll<<endl; 
        cout<<"Name : "<<name<<endl; 
    }
}; 
int main()
{
    Student s1(1,"A"); 
    s1.printRecord( ); 
    Student s2(2,"B"); 
    s2.printRecord( ); 
    swap_object(&s1,&s2); 
    cout<<endl; 
    s1.printRecord( ); 
    s2.printRecord( ); 
    return 0;
}

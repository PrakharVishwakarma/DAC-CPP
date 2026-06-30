#include<iostream> 
using namespace std; 

/* 
class A 
{
    public: 
    int n1; 
    int n2; 
    int n3;
    A( void ) : n1(0) , n2(0) , n3(0)
    {   } 
}; 
void input(A &obj)
{
    cout<<"Enter n1 , n2 , n3  : "; 
    cin>>obj.n1>>obj.n2>>obj.n3; 
}
void display(A &obj)
{
    cout<<obj.n1<<obj.n2<<obj.n3<<endl; 
}
int main()
{
    A obj; 
    ::input(obj); 
    ::display(obj); 
    return 0;
}
*/
class Test 
{
    private: 
    char &ref; 
    public: 
    Test(char &ch) : ref( ch )
    {
        //this->ref = ch; 
    }
    void incr( )
    {
        ref++; 
    }
    void display( )
    {
        cout<<ref<<endl; 
    }
}; 
int main()
{
    //char ch1 = 'A'; 
    //cout<<sizeof(ch1); //1 
    //cout<<sizeof(Test); //1 
    //Test t1(ch1); 
    //t1.incr( ); 
    //t1.display( ); 
    char ch1 = 'A' , ch2 = 'B' , ch3 = 'C'; 
    //char& arr[3] = {ch1 , ch2 , ch3}; 
    Test arr[3] = {ch1 , ch2 , ch3}; 
    for(int index = 0 ; index < 3 ; index++)
    {
        arr[index].incr( ); 
    }
    for(int index = 0 ; index < 3 ; index++)
    {
        arr[index].display( ); 
    }
    return 0;
}

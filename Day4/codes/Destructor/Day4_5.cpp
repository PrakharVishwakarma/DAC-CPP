#include<iostream> 
#define SIZE 3 
using namespace std; 
class Array 
{
    private: 
    int arr[SIZE]; 
    public: 
    Array( )
    {
        for(int index = 0 ; index < SIZE ; index++)
        {
            arr[index] = 100; 
        }
    }
    void acceptRecord( void )
    {
        for(int index = 0 ; index < SIZE ; index++)
        {
            cout<<"Enter ele : "; 
            cin>>arr[index];  
        }
    }
    void printRecord( void )
    {
        for(int index = 0 ; index < SIZE ; index++)
        {
            cout<<"Ele : "<<arr[index]<<endl; 
        }
    }
}; 
int main()
{
    Array a1; 
    a1.acceptRecord( ); 
    a1.printRecord( ); 
    return 0;
}


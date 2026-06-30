#include<iostream> 
#define SIZE 3 
using namespace std; 
class ArrayIndexOutOfBoundException
{
    private: 
    string message; 
    public: 
    ArrayIndexOutOfBoundException(string message)
    {
        this->message = message; 
    }
    string getMessage( void )
    {
        return this->message; 
    }
}; 
class Array 
{
    private: 
    int arr[SIZE]; 
    public: 
    Array( void )
    {
        arr[0] = 10; 
        arr[1] = 20; 
        arr[2] = 30; 
    }
    int operator[](int index)
    {
        if(index < 0 || index >= SIZE)
           throw ArrayIndexOutOfBoundException("Invalid Index");
        return arr[index];  
    }
}; 
int main()
{
    Array a1; 
    int ele = a1[1]; //a1.operator[](1); 
    cout<<ele; 
    return 0;
}

#include<iostream> 
using namespace std; 
class ArithemticException
{
    private: 
    string message; 
    public: 
    ArithemticException(string message)
    {
        this->message = message; 
    }
    string getMessage( void )
    {
        return this->message; 
    }
}; 
void acceptRecord(string msg , int &number)
{
    cout<<msg; 
    cin>>number; 
}
int main()
{
    cout<<"Open the connection "<<endl;
    
    int num1; 
    ::acceptRecord("num1  : ",num1); 
    
    int num2; 
    ::acceptRecord("num2 : ",num2); 

    try
    {
        if(num2==0)
        {
            ArithemticException ex("Divide by zero"); 
            throw ex; 
        }
        else 
        {
            int res = num1 / num2; 
            cout<<"result : "<<res<<endl; 
        }

    }
    catch(ArithemticException ex)
    {
        cout<<ex.getMessage( )<<endl; 
    }
    
    
    cout<<"Close the connection "<<endl;
    return 0;
}

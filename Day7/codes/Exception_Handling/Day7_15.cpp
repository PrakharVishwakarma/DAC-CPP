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
int calculate(int num , int den) 
{
    if(den == 0)
      throw ArithemticException("Divide by zero"); 
    int result = num / den; 
    return result; 
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
        int res = calculate(num1,num2); 
    }
    catch(ArithemticException ex)
    {
        cout<<ex.getMessage( )<<endl; 
    }
    
    cout<<"Close the connection "<<endl;
    return 0;
}

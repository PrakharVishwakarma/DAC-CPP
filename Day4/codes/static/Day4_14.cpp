#include<iostream> 
using namespace std; 

class InstanceCounter 
{
    static int count; 
    public: 
    InstanceCounter( )
    {
        InstanceCounter::count++; 
    } 
    static int getCount( )
    {
        return InstanceCounter::count; 
    }
}; 
int InstanceCounter :: count = 0;
int main()
{
    InstanceCounter i1 , i2 , i3;
    cout<<"Cnt : "<<InstanceCounter::getCount( );  
    return 0;
}
 
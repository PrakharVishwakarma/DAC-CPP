#include<iostream> 

using namespace std; 
class Test 
{
    private: 
    const int num; 
    public: 
    Test( void ) : num(0)
    {
        //this->num = 0; 
    }
    void printRecord(void)
    {   
        //++this->num; 
        cout<<"num : "<<num<<endl; 
    }
}; 
int main()
{
    Test t1; 
    t1.printRecord( ); 
    return 0;
}

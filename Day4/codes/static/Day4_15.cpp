#include<iostream> 
using namespace std; 
class 
{
    public: 
    void acceptRecord( )
    {
        cout<<"void acceptRecord( )"<<endl; 
    }
    static void printRecord( )
    {
        cout<<"void printRecord( )"<<endl; 
    }
}obj; 
int main()
{
    obj.acceptRecord( ); 
    obj.printRecord( ); 
    return 0;
}

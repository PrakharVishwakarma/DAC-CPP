#include<iostream> 
using namespace std; 
//Step1: Understand requirement and Declare the class 
class Date 
{
    //Step2: Declare the data-members 
    //Step4: access specfier
    private: 
    int day; 
    int month; 
    int year; 
    public: 
    void acceptDate( void )
    {
        cout<<"Day : "; 
        cin>>day; 
        cout<<"Month : "; 
        cin>>month; 
        cout<<"Year : "; 
        cin>>year; 
    }
    void printDate( void )
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl; 
    }
}; 

int main()
{
    //Step3: Creating the Object
    Date dt1; 
    //Step5: calling methods
    dt1.acceptDate( );  // message passing 
    dt1.printDate( ); // message passing  
    return 0;
}

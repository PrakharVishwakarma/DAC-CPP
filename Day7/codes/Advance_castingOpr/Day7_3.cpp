#include<iostream> 
using namespace std; 

class Test 
{
    private: 
    int num1; 
    public: 
    Test(void ) : num1(10)
    {   }
    void printRecord( void )
    {
        cout<<"printRecord( void )"<<this->num1<<endl; 
    }
    // const classname * const this;
    // const Test * const this = &t1  
    void showRecord( void ) const 
    {
        //const Test * const ptr = this; 
        Test * const ptr = const_cast<Test*>(this);
        ptr->printRecord( ); // OK  

        // In case of reference
        // const Test &ref = *this; 
        // Test &ref2 = const_cast<Test&>(ref);
        // ref2.printRecord( ); // OK
    }
}; 
int main()
{
    Test t1; 
    t1.showRecord( ); 

    const Test* t2 = new Test( );
    cout<<"Using pointer of const type to call const function"<<endl; 
    t2->showRecord( );
    
    // To call the printRecord function using pointer of const type we can use const_cast to remove the constness and then call the function    
    Test *ptr = const_cast<Test*>(t2); 
    cout<<"Using pointer of const type to call non-const function"<<endl;
    ptr->printRecord( );

    const Test &t3 = t1; 
    cout<<"Using reference of const type to call const function"<<endl;
    t3.showRecord( );
    // To call the printRecord function using reference of const type we can use const_cast to remove the constness and then call the function
    Test &ref = const_cast<Test&>(t3);
    cout<<"Using reference of const type to call non-const function"<<endl;
    ref.printRecord( );

    
    return 0;
}

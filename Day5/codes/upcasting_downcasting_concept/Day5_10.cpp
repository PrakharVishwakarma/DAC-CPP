#include<iostream> 
using namespace std; 
class Base 
{
    private: 
    int num1; 
    int num2; 
    public: 
    Base( void ) : num1(0) , num2(0)
    {   }
    Base(int num1 , int num2) : num1(num1) , num2(num2)
    {   }
    void showRecord( void )
    {
        cout<<"num1 : "<<num1<<endl;
        cout<<"num2 : "<<num2<<endl;
    }
    void printRecord( void )
    {
        cout<<"num1 : "<<num1<<endl;
        cout<<"num2 : "<<num2<<endl;
    }
}; 
class Derived : public Base 
{
    private: 
    int num3; 
    public: 
    Derived( void ) : num3(0)
    {   }
    Derived(int num1 , int num2 , int num3) : Base(num1,num2)
    {   
        this->num3 = num3; 
    }
    void printRecord( void )
    {
        Base::printRecord( ); 
        cout<<"num3 : "<<num3<<endl; 
    }
    void displayRecord( void )
    {
        Base::showRecord( ); 
        cout<<"num3 : "<<num3<<endl; 
    }
}; 
int main()
{
    Base *ptrBase = new Base(10,20);
    //ptrBase->printRecord(); //10 20  
    Derived *ptrDerived = (Derived*)ptrBase; // NOT OK 
    ptrDerived->printRecord( ); 
    return 0;
}

int main11()
{
    Derived d1(10,20,30); 
    Base *ptrBase = &d1; //upcasting 
    //ptrBase->printRecord( ); // 10 20 
    Derived *ptrDerived = (Derived*)ptrBase;//downcasting 
    ptrDerived->printRecord( ); // 10 20 30  
    return 0;
}

int main10()
{
    Base *ptrBase = new Derived(10,20,30) ; //  upcasting 
    ptrBase->printRecord( ); // 10 20 
    Derived *ptrDerived = (Derived*)ptrBase;//downcasting  
    ptrDerived->printRecord(); // 10 20 30 
    return 0;
}

int main9()
{
    Derived *ptrDerived = new Derived(10,20,30); 
    //ptrDerived->printRecord( ); //10 20 30 
    //Base *ptrBase = (Base*)ptrDerived; // upcasting 
    Base *ptrBase = ptrDerived; // upcasting
    //ptrBase->printRecord( ); // 10 20  
    ptrDerived = (Derived*)ptrBase; // downcasting 
    ptrDerived->printRecord( );  
    return 0;
}
int main8()
{
    Derived *ptrDerived = new Derived(10,20,30); 
    //ptrDerived->printRecord( ); //10 20 30 
    //Base *ptrBase = (Base*)ptrDerived; // upcasting 
    Base *ptrBase = ptrDerived; // upcasting
    ptrBase->printRecord( ); // 10 20  
    return 0;
}

int main7()
{
    Derived d1(10,20,30); 
    Base b1; 
    b1 = d1; 
    return 0;
}

int main6()
{
    Derived d1(10,20,30); 
    Derived d2; 
    d2 = d1; 
    d2.printRecord( ); //10 20 30 
    return 0;
}

int main5()
{
    Base b1(10,20); 
    Base b2; 
    b2 = b1; 
    b2.printRecord( ); // 10 20 
    return 0;
}

int main4()
{
    Derived *ptrDerived = new Derived( ); 
    //ptrDerived->displayRecord( ); // Derived::displayRecord(); 
    //ptrDerived->printRecord( ); // Derived::printRecord( ); 
    ptrDerived->Base::printRecord( ); // Base::printRecord( ); 
    ptrDerived->Base::showRecord( ); // Base::showRecord( ); 
    return 0;
}

int main3()
{
    Base *ptrBase = new Base( ); 
    //ptrBase->printRecord( ); // Base::printRecord();  
    //ptrBase->showRecord( ); // Base::showRecord( ); 
    //ptrBase->Derived::displayRecord( ); // NOT OK 
    //ptrBase->Derived::printRecord( ); 
    delete ptrBase; 
    ptrBase = NULL; 
    return 0;
}

int main2()
{
    Derived d1; 
    //d1.displayRecord( ); // Derived::displayRecord( ); 
    //d1.printRecord( ); // Derived::printRecord( );  
    //d1.Base::printRecord( ); // Base::printRecord( );  
    //d1.Base::showRecord( ); //Base::showRecord( ); 
    return 0;
}

int main1()
{
    Base base; 
    //base.printRecord( );  // Base::printRecord( ); 
    //base.showRecord( ); // Base::showRecord( ); 
    
    //base.Derived::printRecord( ); //NOT OK
    //base.Derived::displayRecord( ); // NOT OK 
    return 0;
}

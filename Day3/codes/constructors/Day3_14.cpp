#include<iostream>
using namespace std;

/*
class Test
{
    private:
    int num1;
    int num2;
    int num3;
    public:
    Test( void );
    void printRecord( void );
};
//construtor member init list should appear in defination part
Test :: Test( void ) : num3(num2) , num2(num1) , num1(0)
{   }
void Test ::  printRecord( void )
{
    cout<<"num1 : "<<this->num1<<endl;
    cout<<"num2 : "<<this->num2<<endl;
    cout<<"num3 : "<<this->num3<<endl;
}
int main()
{
    Test t1;
    t1.printRecord( );
    return 0;
}

*/
class Test
{
private:
    int num1;
    int num2;
    int num3;

public:
    Test(void) : num3(num2), num2(num1), num1(0)
    {
    }
    // Don't do like
    // Test(void) : num1(0) , num2(num1) , num3(num2)
    // because num1 is not initialized when num2 is getting initialized and num2 is not initialized when num3 is getting initialized

    void printRecord(void)
    {
        cout << "num1 : " << this->num1 << endl;
        cout << "num2 : " << this->num2 << endl;
        cout << "num3 : " << this->num3 << endl;
    }
};
int main()
{
    Test t1;
    t1.printRecord();
    return 0;
}

/*
class Test
{
    private:
    int num1;
    int num2;
    int num3;
    public:
    Test( void )
    {
        this->num3 = num2;
        this->num2 = num1;
        this->num1 = 0;
    }
    void printRecord( void )
    {
        cout<<"num1 : "<<this->num1<<endl;
        cout<<"num2 : "<<this->num2<<endl;
        cout<<"num3 : "<<this->num3<<endl;
    }
};
int main()
{
    Test t1;
    t1.printRecord( );
    return 0;
}
*/
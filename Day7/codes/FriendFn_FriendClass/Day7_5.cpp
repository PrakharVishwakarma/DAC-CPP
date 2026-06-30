#include <iostream>
using namespace std;

class Test{
private:
    int num1;

protected:
    int num2;

public:
    Test(void) : num1(10), num2(20)
    {
    }
    friend int main();
};
int main()
{
    Test t1;
    cout << "num1 : " << t1.num1 << endl;
    cout << "num2 : " << t1.num2 << endl;
    return 0;
}

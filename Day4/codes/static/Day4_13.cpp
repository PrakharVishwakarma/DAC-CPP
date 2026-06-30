#include <iostream>
using namespace std;

class Math
{
public:
    static int pow(int base, int index)
    {
        int result = 1;
        for(int count = 1 ; count <= index ; count++)
        {
            result = result * base; 
        }
        return result; 
    }
};
int main()
{
    int res = Math::pow(2,3); 
    cout<<"res : "<<res<<endl; 
    return 0;
}

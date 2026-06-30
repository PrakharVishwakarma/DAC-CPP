#include<iostream> 
using namespace std; 
inline int max(int x , int y)
{
    return x > y ? x : y; 
}
int main()
{
    int a = 10 , b = 20; 
    int maxNum = max(a,b);
    //          x > y ? x : y; 
    cout<<maxNum<<endl;  
    return 0;
}

// Inline is a request to the compiler to replace the function call with the actual code of the function.
// In oppposite to inline macros are the command to the preprocessor to replace the macro call with the actual code of the macro.
// We can't make main function as inline because it is the entry point of the program and it is called by the operating system, not by our code.
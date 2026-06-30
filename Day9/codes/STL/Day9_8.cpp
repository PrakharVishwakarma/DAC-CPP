#include<iostream> 
#include<stack>
using namespace std; 
/*
     built-in stack implemented using linkedlist 
  Built-in stack 
    - void push(T val); 
    - void pop( ); 
    - T top( ); // like our peek()
    - empty( ); 

*/
int main()
{
    stack<int> stk; 
    stk.push(10); 
    stk.push(20);
    stk.push(30);
    stk.push(40);
    
    int val = stk.top( ); //peek 
    cout<<"val : "<<val<<endl; 
    stk.pop( );
    val = stk.top( ); //peek  
    cout<<"val : "<<val<<endl; 
    while(!stk.empty( ))
    {
        val = stk.top( ); 
        stk.pop( ); 
        cout<<"Popped ele : "<<val<<endl; 
    }
    return 0;
}

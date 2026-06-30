#include<stdio.h> 
//main is a user-defined function 
//main is an entry-point function 
//per-project we can write only one main function 
//Job of main function is to call other function 
//OS calls main function 
//if we dont write main function it will give linker error 
// we cannot declare main as const / static  
//main should be global we cannot define main inside the structure/function/class
//program execution begins from main( )
void print( ); // global declaration 
int main() 
{
    //void print( ); // local declaration 
    print( );    
    return 0;
}
void print( )
{
    printf("Hello world"); 
}

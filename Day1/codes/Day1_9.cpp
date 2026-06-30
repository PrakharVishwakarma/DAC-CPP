#include<stdio.h>
int main()
{
    const int num = 10; 
    const int * const ptr = &num; 
    //ptr is a constant pointer pointing to a constant integer variable 
    printf("num : %d",num); // 10 // OK 
    printf("*ptr : %d",*ptr); // 10 // OK 
    //num = 20; // NOT OK (value is constant) 
    //*ptr = 20; // NOT OK (pointer is a constant)
    return 0;
}

int main4()
{
    int num = 10; 
    int * const ptr = &num; 
    //ptr is a constant pointer pointing to a non-constant integer variable 
    printf("num : %d\n",num); // OK 
    printf("*ptr : %d\n",*ptr); //OK 
    num = 20; // OK 
    printf("num : %d\n",num); // OK 
    printf("*ptr : %d\n",*ptr); //OK
    int num2 = 20; 
    //ptr = &num2; // NOT OK ( pointer is constant) 
    return 0;
}

int main3()
{
    const int a = 10; 
    const int *ptr = &a; 
    //ptr is non-constant pointer pointing to a constant integer variable 
    printf("a : %d\n",a); //OK 
    printf("*ptr : %d\n",*ptr); //OK 
    //a = 20; // NOT OK 
    //*ptr = 20; // NOT OK 
    const int b = 30; 
    ptr = &b; 
    printf("*ptr : %d\n",*ptr); //OK 
    return 0;
}

int main2()
{
    int a = 10; 
    int *ptr = &a; 
    printf("a : %d\n",a); //10 
    *ptr = 20; 
    printf("a : %d\n",a); //20 
    a = 30; 
    printf("*ptr : %d\n",*ptr); //30
    printf("a : %d\n",a); //30 
    return 0;
}
 
int main1()
{
    const int num = 10; 
    //num = 10; // NOT OK 
    printf("num : %d",num);  
    return 0;
}

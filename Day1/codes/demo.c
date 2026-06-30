#include<stdio.h> 
int main()
{
    int num = 10; 
    const int * ptr = &num;
    num = 20; 
    printf("num : %d",num); //20 
    //*ptr = 30; // NOT OK   
    return 0;
}

int main1()
{
    const int num = 10; 
    int * ptr = &num; 
    printf("num : %d",num); //10 
    *ptr = 20; 
    printf("num : %d",num); //20 
    return 0;
}

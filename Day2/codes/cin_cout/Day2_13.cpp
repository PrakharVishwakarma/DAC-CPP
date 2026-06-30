#include<iostream> 
using namespace std;  
int main()
{
    int num1,num2; 

    cout<<"Enter the num1 and num2"; 
    //printf("Enter num1 and num2"); 


    cin>>num1>>num2; 
    //scanf("%d%d",&num1,&num2); 

    cout<<"num1 : "<<num1<<endl<<"num2 : "<<num2; 
    //printf("num1 :%d\nnum2 : %d",num1,num2); 
    return 0;
}

int main2()
{
    using namespace std; 
    int num1 , num2; 

    cout<<"num1 : "; 
    //printf("num1 : "); 

    cin>>num1; 
    //scanf("%d",&num1); 

    cout<<"num2 : "; 
    //printf("num2 : ");
    
    cin>>num2; 
    //scanf("%d",&num2);
    
    cout<<"num1 : "<<num1<<endl; 
    //printf("num1 : %d\n",num1); 
    
    cout<<"num2 : "<<num2<<endl;
    //printf("num2 : %d\n",num2); 
    return 0;
}

int main1()
{
    int num1; 
    //printf("num1 : ");
    std::cout<<"num1 : ";  
    
    std::cin>>num1; 
    //scanf("%d",&num1);
    
    std::cout<<"num1 : "<<num1; 
    //printf("num1 : %d",num1); 
    return 0;
}

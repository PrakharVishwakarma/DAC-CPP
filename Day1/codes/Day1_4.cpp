#include<stdio.h> 
struct Point 
{
    int xPos; //struct members 
    int yPos; //struct members 
};
void accept_record( struct Point *ptr )
{
    printf("xPos : "); 
    scanf("%d",&ptr->xPos); 
    printf("yPos : "); 
    scanf("%d",&ptr->yPos); 
}
void print_record(struct Point *ptr)
{
    printf("xPos : %d\n",ptr->xPos); 
    printf("yPos : %d\n",ptr->yPos); 
}
int main1()
{
   
    struct Point pt1; // pt1 => object / variable  
    accept_record(&pt1);  
    print_record(&pt1); 
    return 0;
}
int main2()
{
    struct Point 
    {
         int xPos; //struct members 
         int yPos; //struct members 
    };
    struct Point pt1; // pt1 => object / variable  
    printf("xPos : "); 
    scanf("%d",&pt1.xPos); 
    printf("yPos : "); 
    scanf("%d",&pt1.yPos); 

    printf("xPos : %d",pt1.xPos); 
    printf("xPos : %d",pt1.yPos); 
    return 0;
}

int main()
{
    //local structure 
    struct Point 
    {
         int xPos; 
         int yPos; 
    };
    struct Point pt1; 
    printf("xPos : %d\n",pt1.xPos);
    printf("yPos : %d\n",pt1.yPos); 
    return 0;
}

#include <stdio.h>
namespace na
{
    int num1 = 10;
}
using namespace na;

namespace nb
{
    void showRecord()
    {
        // using namespace na;
        // printf("num1 : %d\n",na::num1);
        printf("num1 : %d\n", num1);
    }
    void printRecord()
    {
        // using namespace na;
        // printf("num1 : %d\n",na::num1);
        printf("num1 : %d\n", num1);
    }
    void displayRecord()
    {
        // using namespace na;
        // printf("num1 : %d\n",na::num1);
        printf("num1 : %d\n", num1);
    }
}
int main()
{
    nb::showRecord();
    nb::displayRecord();
    nb::printRecord();
    return 0;
}
/*
namespace na
{
    int num1 = 10;
}
using namespace na;
void showRecord( )
{
    //using namespace na;
    //printf("num1 : %d\n",na::num1);
    printf("num1 : %d\n",num1);
}
void printRecord( )
{
    //using namespace na;
    //printf("num1 : %d\n",na::num1);
    printf("num1 : %d\n",num1);
}
void displayRecord( )
{
    //using namespace na;
    //printf("num1 : %d\n",na::num1);
     printf("num1 : %d\n",num1);
}
int main()
{
    ::showRecord( );
    ::displayRecord( );
    ::printRecord( );
    return 0;
}
*/
/*
namespace na
{
    int num1 = 10;
}
void showRecord( )
{
    using namespace na;
    //printf("num1 : %d\n",na::num1);
    printf("num1 : %d\n",num1);
}
void printRecord( )
{
    using namespace na;
    //printf("num1 : %d\n",na::num1);
    printf("num1 : %d\n",num1);
}
void displayRecord( )
{
    using namespace na;
    //printf("num1 : %d\n",na::num1);
     printf("num1 : %d",num1);
}
int main()
{
    ::showRecord( );
    ::displayRecord( );
    ::printRecord( );
    return 0;
}
*/
/*
namespace na
{
    int num1 = 10;
}
void showRecord( )
{
    printf("num1 : %d\n",na::num1);
}
void printRecord( )
{
    printf("num1 : %d\n",na::num1);
}
void displayRecord( )
{
    printf("num1 : %d\n",na::num1);
}
int main()
{
    ::showRecord( );
    ::displayRecord( );
    ::printRecord( );
    return 0;
}
*/
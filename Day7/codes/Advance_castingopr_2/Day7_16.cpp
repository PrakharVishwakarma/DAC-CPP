#include<iostream> 
class Product; 
void printBook(Product *p);
void printProduct(Product *p);  
void printNumber(const int *p); 
using namespace std; 
class Product
{   
    private: 
    string title; 
    double price; 
    public: 
    Product( void ): title("") , price(0.0)
    {   }
    Product(string title , double price) : title(title) , price(price)
    {   }
    void setTitle(string title)
    {
        this->title = title; 
    }
    void setPrice(double price)
    {
        this->price = price; 
    }
    string getTitle( void ) 
    {
        return this->title; 
    }
    double getPrice( void )
    {
        return this->price; 
    }
    virtual void input( void )
    {
        cout<<"Title : "; 
        cin>>title; 
        cout<<"Price : "; 
        cin>>price; 
    }

}; 
class Book : public Product
{
    private: 
    int pages; 
    public:
    Book(void ) : pages(0)
    {   }
    Book(string name , double price , int pages) : Product(name,price)
    {
        this->pages = pages; 
    } 
    void setPages(int pages)
    {
        this->pages = pages; 
    }
    int getPages( void )
    {
        return this->pages; 
    }
    void input( void )
    {
        Product::input( ); 
        cout<<"Pages : "; 
        cin>>pages; 
    }
}; 
class Tape : public Product
{
    private: 
    int duration; 
    public: 
    Tape( void ) : duration(0)
    {   }
    Tape(string title , double price , int duration) : Product(title,price)
    {   
        this->duration = duration; 
    } 
    void setDuration(int duration)
    {
        this->duration = duration; 
    }
    int getDuration(void)
    {
        return this->duration; 
    }
    void input( )
    {
        Product::input( ); 
        cout<<"Duration : "; 
        cin>>duration; 
    }
}; 
class Point 
{
    private: 
    int xPos; 
    int yPos; 
    public: 
    Point( void ) : xPos(0) , yPos(0)
    {   }
    Point(int xPos , int yPos) : xPos(xPos) , yPos(yPos)
    {   }
    void printRecord( void )
    {
        cout<<"xPos : "<<xPos<<endl; 
        cout<<"yPos : "<<yPos<<endl;  
    }
}; 
int main()
{
    Book bk1("Book1",100,132); 
    const type_info& bkT1  = typeid(bk1); 
    //cout<<"Type : "<<bkT1.name( )<<endl; 

    Tape tp1("Tape1",100,132); 
    Product *p = &tp1; 
    const type_info& tpT1 = typeid(*p);
    //cout<<"Type : "<<tpT1.name( )<<endl; 
    
    // if(tpT1 == typeid(Book))
    //    cout<<"product is Book"<<endl; 
    // else if(tpT1 == typeid(Tape))
    //    cout<<"Product is Tape"<<endl; 
    // else 
    //    cout<<"Product is product"<<endl; 
    
    Book bk2("book2" , 100 , 200); 
    //printBook(&bk2); 
    
    Tape tp2("tape2" , 100 , 132); 
    //printProduct(&tp2); 
    //printProduct(&bk2); 
    
    int number = 10; 
    //printNumber(&number); 
    //cout<<"Inside main : "<<number<<endl;//20 
    
    Point pt1(10,20); 
    int *iptr = reinterpret_cast<int*>(&pt1); 
    *iptr = 20; 
    pt1.printRecord( ); 
    return 0;
}
void printNumber(const int *p)
{
    cout<<"Original Number : "<<*p<<endl;
    //*p = *p * 2;  
    int *q = const_cast<int*>(p); 
    *q = *q * 2; 
    cout<<"Modified Number : "<<*p<<endl;
}
void printBook(Product *p)
{
    cout<<"Book details : "<<endl; 
    cout<<"Title : "<<p->getTitle( )<<endl; 
    cout<<"Price : "<<p->getPrice( )<<endl; 
    Book *b = static_cast<Book*>(p); 
    cout<<"Pages : "<<b->getPages( )<<endl; 
}
void printProduct(Product *p)
{
    cout<<"Book/Tape details : "<<endl; 
    cout<<"Title : "<<p->getTitle( )<<endl; 
    cout<<"Price : "<<p->getPrice( )<<endl;
    Tape *t = dynamic_cast<Tape*>(p); 
    if(t!=NULL)
      cout<<"Duration : "<<t->getDuration()<<endl;
    Book *b = dynamic_cast<Book*>(p); 
    if(b!=NULL)
      cout<<"Pages :" <<b->getPages( )<<endl;  
    
}

#include<stdio.h>
#include<conio.h>
struct mall
{
       int id;
       char name[100];
       int price;
       int i;
       float discount;
}p;
struct mall read();
void display(struct mall b);
int main()
{   
    struct mall x;
    x= read();
    display(x);
    getch();
    
}

struct mall read()
{   
    struct mall x;
    
    
    
    printf("enter id:\n");
    scanf("%d",&x.id);
  
    printf("enter name:\n");
    scanf("%s",x.name);

    printf("enter price:\n");
    scanf("%d",&x.price);
    
    printf("enter discount:\n");
    scanf("%f",&x.discount);
    
    return x;
    
} 
    
    
    
  void display(struct mall b)
   {   
       printf("details are:\n");
       printf("ID\t product name\t Price\t Discount\n");
       printf("%d\t %s\t\t  %d\t %f\n",b.id, b.name, b.price, b.discount);
       
  
    }   



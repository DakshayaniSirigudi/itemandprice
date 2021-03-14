#include<stdio.h>
int main()
{
 int i;
 printf("enter your choice");
 scanf("%d",i);
  switch(i)
  {
    case 1:
    {
     printf("item:PIZZA,price:239/-");
     break;
    }
   case 2:
    {
     printf("item:FRENCHFRIES,price:99/-");
     break;
    }
   case 3:
    { 
     printf("item:SANDWICH,price:149/-");
     break;
    }
   case 4:
    {
     printf("item:BURGER,price:129/-");
     break;
    }
   case 5:
    {
     printf("item:PASTA,price:179/-");
     break;
    }
   default:
    {
     printf("invalid choice");
     break;
    }
 return 0;
}

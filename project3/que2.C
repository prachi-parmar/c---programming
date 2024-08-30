#include<stdio.h>
int main()
{
   int num, i, count=0;

   printf("enter the number:-");
   scanf("%d",&num);
    
    for(int i=1; num!=0; i++){
       
        num=num/10;
        count++;
    }
       printf("\nnumber of count : %d",count);
}
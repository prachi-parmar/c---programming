#include<stdio.h>
void main()
{
    int num,i,count=0,first,last;
     
     printf("enter the number :");
     scanf("%d",&num);

     last=num%10;
      
      for(i = 1; num !=0;i++)
      {
         first=num;
         num=num/10;
         count++;}
   
       
             printf("\nnumber of count : %d",count);
             printf("\nfirst %d last %d : ",first,last);
             printf("\nsum of first and last digits : %d",first+last);
            
      
} 

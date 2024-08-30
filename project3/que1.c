#include<stdio.h>
void main()
{

    char ch ='A';
    do{
        printf("%c\n",ch);
        ch = ch +4;
    }
    while(ch<='Z');    
}
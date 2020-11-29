//C program to print all ASCII character with their values

#include<stdio.h>
int main(void)
{
    int count;
    for(count=0;count<=255;count++)
    printf("ASCII value of %c is %d\n",count,count);
}
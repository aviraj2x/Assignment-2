//C program to print the multiplication table of any number

#include<stdio.h>
int main(void)
{
    int n,i,range;
    printf("Enter an integer ");
    scanf("%d",&n);
    printf("Enter the range ");
    scanf("%d",&range);

    for(i=1;i<=range;++i)
    {
        printf("%d * %d = %d\n",n,i,n*i);

    }
}
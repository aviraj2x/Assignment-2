//C program to count the number of digits in a number

#include<stdio.h>
int main(void)
{
    long long int n;
    int count=0,rem;

    printf("Enter a number: ");
    scanf("%ld",&n);

    while(n>0)
    {
        n=n/10;
        count++;
    }
    printf("Number of digits= %d",count);
}
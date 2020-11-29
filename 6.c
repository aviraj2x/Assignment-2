//Write a C program to find the first and last digit of a number

#include<Stdio.h>
int main(void)
{
    int n,sum=0,fdigit,ldigit;
    printf("Enter a number: ");
    scanf("%d",&n);

    //last digit of a number
    ldigit=n%10;

    //First digit got by dividing n by 10 until n is greater than 10
    while(n>=10)
    {
        n=n/10;
    }
    fdigit=n;

    printf("First digit: %d and last digit: %d",fdigit,ldigit);
}
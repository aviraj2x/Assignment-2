//C program to find the sum of all odd numbers between 1 to n
#include<stdio.h>
int main(void)
{
    int i,n,sum=0;

    printf("Enter the value of n ");
    scanf("%d",&n);
    printf("Odd numbers between 1 and %d are ",n);

    for(i=1;i<=n;++i)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
            sum= sum+i;
        }
    }
    printf("\nThe sum of all odd numbers is %d",sum);
}
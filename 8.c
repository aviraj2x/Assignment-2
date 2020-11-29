#include<stdio.h>

int main(void)
{
    long long n;
    int i,lastdigit;
    int freq[100];

    printf("Enter any number: ");
    scanf("%lld",&n);

    for(i=0;i<10;i++)
    freq[i]=0;

    while(n!=0)
    {
        lastdigit=n%10;
        n=n/10;
        freq[lastdigit]++;
    }

    printf("Frequency of each digit in %lld is \n",n);
    for(i=0;i<10;i++)
    {
        printf("Frequency of %d is %d\n ",i,freq[i]);
    }
}
//C program to swap first  and last digits of a number
#include<stdio.h>
#include<math.h>
int main(void)
{
    int n,swappednum,fdigit,ldigit,digits;

    printf("Enter any number: ");
    scanf("%d",&n);
    ldigit= n%10;
    digits= (int)log10(n);
    fdigit= (int)(n/pow(10,digits));
    swappednum= ldigit;
    swappednum*= (int)pow(10,digits);
    swappednum+= n%((int)pow(10,digits));
    swappednum-= ldigit;
    swappednum+= fdigit;

    printf("Original number= %d\n",n);
    printf("Numbers after swaping first and last digit: %d",swappednum);
}
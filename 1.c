//C program to print all alphabets from a to z

#include<stdio.h>
int main(void)
{
    char ch='a';

    printf("Alphabets :");
    while(ch<='z')
    {
        printf("%c\t",ch);
        ch++;
    }
}
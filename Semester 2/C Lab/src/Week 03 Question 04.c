#include<stdio.h>
void decreasingNormalStarTriangle(unsigned long long int lines)
{
    unsigned long long int i, j;
    for(i=1; i<=lines; printf("\n"), i++)
    {
               for(j=1; j<i; printf(" "), j++);
               for(j=(lines-i)*2+1; j>0; printf("*"), j--);
    }
}
int main()
{
    unsigned long long int numberOfLine;
    printf("Enter the number of lines you want to print the pattern: ");
    scanf("%llu", &numberOfLine);
           decreasingNormalStarTriangle(numberOfLine);
    return 0;
};
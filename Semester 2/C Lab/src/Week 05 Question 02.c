// Write a Program to find the length of string.

#include <stdio.h>

int main() 
{
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    while (str[length] != '\0') 
    {
        length++;
    }
    printf("Length of the string: %d\n", length);
    return 0;
}

// output
// 
// Enter a string: Alokparna Mitra
// Length of the string: 15
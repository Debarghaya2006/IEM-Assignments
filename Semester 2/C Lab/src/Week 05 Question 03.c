// Write a Program to copy one string to another string.

#include <stdio.h>

int main() 
{
    char str1[100], str2[100];
    int i = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str1);
    while (str1[i] != '\0') 
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    printf("Copied string: %s\n", str2);

    return 0;
}

// output 
// 
// Enter a string: Debarghaya Mitra
// Copied string: Debarghaya Mitra
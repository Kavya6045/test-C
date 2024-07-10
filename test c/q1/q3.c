#include <stdio.h>
#include<conio.h>
void reverseString(char str[]) 
{
    int start = 0;
    int end = 0;
    char temp;

    while (str[end] != '\0') 
	{
        end++;
    }
    end--; 
    
    while (start < end) 
	{
       
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

void main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0') 
	{
        len++;
    }
    if (str[len - 1] == '\n') 
	{
        str[len - 1] = '\0';
    }

    reverseString(str);

    printf("Reversed string: %s\n", str);

    getch();
}


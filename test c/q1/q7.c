#include <stdio.h>
#include <conio.h>
void main() 
{
    int i, j;

    
    for (i = 2; i <= 4; i++) 
	{
       
        for (j = 1; j <= i; j++) 
		{
            
            printf("%d ", i * i);
        }
        
        printf("\n");
    }

    getch();
}


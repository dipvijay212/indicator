#include<stdio.h>
#include<conio.h>
#include<string.h>

int length(char *str);

void main() 
{
    char string[100];
    
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
       
    int len=length(string);
    
    printf("The size of string: %d\n",len);
    
    getch();
}
int length(char *str) 
{
    int length = 0;
    
    while (*str != '\0') 
	{
        length++;
        str++; 
    }
    
    return length;
}

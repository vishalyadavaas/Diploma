#include <stdio.h>
#include<conio.h>
void main()
{
	char name[50];
	printf("Enter your text: ");

	// Reads string from user
	gets(name);
    printf("Your text is: ");
	// Displays string
	puts(name);
}

// c program to find the length of string
#include <stdio.h>
#include <string.h>

int main()
{
char str[1000];
int i;

printf("Enter the string: ");
scanf("%s", str);

for (i = 0; str[i] != '\0'; ++i);

printf("Length of string is %d", i);
return 0;
}

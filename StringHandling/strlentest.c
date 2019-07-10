/*
	strlen() function is used to return length of given string
*/
#include <stdio.h>
#include <string.h>
int main()
{
     char str1[] = "Hello";
     char str2[30]="Hi";
     printf("%d %d", strlen(str1),strlen(str2));
     return 0;
}

/*
Output using gcc compiler is: 5 2
*/

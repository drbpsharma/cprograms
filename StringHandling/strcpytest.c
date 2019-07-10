/*
	strcpy() function is used to copy string from source to target
*/
#include <stdio.h>
#include <string.h>
int main()
{
     char source[30] = "Hello India";
     char target[30];
     strcpy(target,source);
     printf("%s", target);
     return 0;
}

/*
Output: Hello India
*/

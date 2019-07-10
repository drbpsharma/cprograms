/*
	strcat() function is used to concatenate source string with target string
*/
#include <stdio.h>
#include <string.h>
int main()
{
     char source[30] = "Hello";
     char target[30]="Hi";
     strcat(target,source);
     printf("%s", target);
     return 0;
}

/*
Output: HiHello
*/

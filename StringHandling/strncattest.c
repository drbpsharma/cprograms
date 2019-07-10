/*
	strncat() function is used to concatenate first n character from source string with target string
*/
#include <stdio.h>
#include <string.h>
int main()
{
     char source[30] = "Hello";
     char target[30]="Hi";
     strncat(target,source,2);
     printf("%s", target);
     return 0;
}

/*
Output: HiHe
*/

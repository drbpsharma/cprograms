/*
	strncpy() function is used to copy n number of characters from source string to target string
*/
#include <stdio.h>
#include <string.h>
int main()
{
     char source[30] = "Hello India";
     char target[30]="";
     strncpy(target,source,4);
     printf("%s", target);
     return 0;
}

/*
Output: Hell
*/

/*
	strrchr() function is used to search a character in given string from reverse side
*/
#include <stdio.h>
#include <string.h>
int main()
{
     char mystr[] = "Welcome to world of C Programming";
     printf ("%s", strrchr(mystr, 'm'));
     return 0;
}

/*
Output: ming
*/

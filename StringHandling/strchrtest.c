/*
	strchr() function is used to search a character in given string from front side
*/
#include <stdio.h>
#include <string.h>
int main()
{
     char mystr[] = "Welcome to world of C Programming";
     printf ("%s", strchr(mystr, 'm'));
     return 0;
}

/*
Output: me to world of C Programming
*/

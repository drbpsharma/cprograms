/*
	strstr() function is used to search a string in another string
*/
#include <stdio.h>
#include <string.h>
int main()
{
     char inputstr[70] = "Welcome to World of C Programming";
     printf ("Output string is: %s", strstr(inputstr,"Program"));
     return 0;
}

/*
Output: Programming
/*

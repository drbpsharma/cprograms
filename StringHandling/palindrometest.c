/*
	WAP to input a string and check it to be palindrome
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[51],str2[51];
    printf("Enter a string : ");
    gets(str1);
    strcpy(str2,str1); /* making duplicate copy of str1 into str2 */
    strrev(str2);
    if(strcmp(str1,str2)==0)
    	printf("%s is palindrome",str1);
    else
		printf("%s is not a palindrome",str1);
    return 0;
}


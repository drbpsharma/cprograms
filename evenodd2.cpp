//A program to input a number and check it to be even or odd using arithmetic operator only
#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n%2)
	 printf("%d is odd",n);
	else
	 printf("%d is even",n);
	getch();
}

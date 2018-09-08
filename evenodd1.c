//A program to input a number and check it to be even or odd using arithmetic and relational operators
#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n%2==0)
	 printf("%d is even",n);
	else
	 printf("%d is odd",n);
	getch();
}

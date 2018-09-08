//A program to input a number and check it to be even or odd using bitwise operator only
#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n&1)
	 printf("%d is odd",n);
	else
	 printf("%d is even",n);
	getch();
}

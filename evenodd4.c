// A program to input a number and check it to be even or odd 
// without using any arithmetic, logical, bitwise or relational operator
#include<stdio.h>
#include<conio.h>
struct test
{
	unsigned n:1;
};
main()
{
	int n; struct test t;
	printf("Enter a number : ");
	scanf("%d",&n);
	t.n=n;
	if(t.n)
	 printf("%d is odd",n);
	else
	 printf("%d is even",n);
	getch();
}

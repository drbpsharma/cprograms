/* WAP to input a number and check it to be prime number */
#define FALSE 0
#define TRUE 1
main(){
	int n,d=2,cut=FALSE;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(d<n)
	{
		if(n%d==0)
		{
			cut=TRUE;break;
		}
		d++;
	}
	if(cut==0)
		printf("%d is a prime number",n);
	else
		printf("%d is not a prime number",n);
}

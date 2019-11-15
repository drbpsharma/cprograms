/*WAP to input two numbers and show all prime numbers in range */
main()
{
	int a,b,n;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	if(a>b) a=(a+b)-(b=a);
	for(n=a;n<=b;n++)
	{
		int d=2,cut=0;
		while(d<n)
		{
			if(n%d==0)
			{
				cut=1;break;
			}
			d++;
		}
		if(cut==0) printf("%d ",n);
	}
}

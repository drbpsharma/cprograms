/* WAP to show nth Prime Number */
main()
{
	int count,n,i=0;
	printf("Enter nth prime number : ");
	scanf("%d",&count);
	
	n=2;
	for(;;)
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
		if(cut==0)
		{
			i++;
			if(i==count)
			{
				printf("%dth prime number is %d",count,n);break;
			}
		}
		n++;
	}
	
}

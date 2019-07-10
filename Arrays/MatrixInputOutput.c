/*
	WAP to create matrix of 3x4 by getting data from user
*/
main()
{
	int ar[3][4],i,j;
	printf("Enter 12 integers : ");
	for(i=0;i<3;i++)
	 for(j=0;j<4;j++)
	  scanf("%d",&ar[i][j]);
	
	printf("Array in matrix format is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		 printf("%d\t",ar[i][j]);
		printf("\n");
	}
}

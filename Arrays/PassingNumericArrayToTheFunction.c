/*
	WAP having a function which takes and array of integers as argument and returns sum of numbers in given array
*/
int sumarray(int *ar, int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	 sum=sum+ar[i];
	return sum;
}
main()
{
	int ar[]={6,9,5,6,4,5};
	int s=sumarray(ar,6);
	printf("Sum of values in array is %d",s);
}

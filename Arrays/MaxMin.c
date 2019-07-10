/*
Create a function which takes an array of integers as argument and returns smallest
and biggest of the numbers in array. Call the function from main() with sample array.
*/
struct result
{
	int min,max;	
};
struct result maxmin(int *ar,int n)
{
	struct result r; int i;
	r.max=r.min=ar[0];
	for(i=0;i<n;i++)
	{
		if(ar[i]>r.max) r.max=ar[i];
		if(ar[i]<r.min) r.min=ar[i];
	}
	return r;
}
main()
{
	int ar[]={6,7,8,8,9,5,456,7,8,9,95,77,89};
	struct result r=maxmin(ar,13);
	printf("max is %d and min is %d",r.max,r.min);
}

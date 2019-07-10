/*
	WAP to input 5 name of 50 characater max length and show those names
*/
main()
{
	char names[5][51];
	int i;
	printf("Enter 5 names : ");
	for(i=0;i<5;i++)
	 gets(names[i]);
	
	printf("Given names are\n");
	for(i=0;i<5;i++)
	 puts(names[i]);
}

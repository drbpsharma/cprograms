/*
	WAP having a function which a string and returns of sum all the digits in that string
*/
int sumdigit(char *str)
{
	int i=0,sum=0;
	while(str[i])
	{
		if(isdigit(str[i]))
		 sum=sum+str[i]-'0';
		i++;
	}
	return sum;
}
main()
{
	char str[100]; int s;
	printf("Enter an alphanumeric string : ");
	gets(str);
	s=sumdigit(str);
	printf("Sum of digits is %d",s);
}

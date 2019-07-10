#include<stdio.h>
#include<string.h>
main()
{
	char userid[51],pass[51],ch;
	int i=0;
	printf("User ID : ");
	gets(userid);
	fflush(stdin);
	printf("Password : ");
	while(i<50)
	{
		ch=getch();
		if(ch=='\r') break;
		pass[i]=ch;
		i++;
		putchar('*');
	}
	pass[i]='\0';
	if(strcmp(userid,"abes")==0 && strcmp(pass,"ghaziabad")==0)
		printf("authentication pass");
	else
		printf("authencation faild");
}

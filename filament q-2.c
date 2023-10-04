#include<stdio.h>
#include<string.h>
main()
{
	
	char email[100]="nikita",email1[100];
	char password[100]="@abcd",password1[100];
	printf("enter the email=");
	scanf("%s",&email1);
	printf("enter the password=");
	scanf("%s",&password1);
	
	if(strcmp(email,email1)==0)
	{
		if(strcmp(password,password1)==0)
		{
			printf("\nlogin sucess.");
		}
		else
		{
			printf("\n login not sucess.");
		}
	}
	else
	{
		printf("dose not exits");
	}
}
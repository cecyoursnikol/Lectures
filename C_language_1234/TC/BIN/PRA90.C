#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
	char username[15];
	char password[20];
	int i;
clrscr();

	printf("enter your username : \n");
	scanf("%s",&username);

	printf("enter your password : \n");
	//scanf("%s",password);
	i=0;
	while(1)
	{
		password[i] = getch();
		printf("%c",3);
		if(password[i]=='\n' || password[i]=='\r')
		{
		      break;
		}
		i++;

	}
	 password[i]=NULL;
	if(strcmp(username,"shivam")==0)
	{
	  if(strcmp(password,"12345")==0){

	    printf("\nwelcome.login success!\n");

	  }
	  else
	  {
	      printf("\nwrong password\n");
	  }
	}
	else
	{
		printf("\nuser doesn't exitst\n");
	}

getch();
}
#include<stdio.h>
#include<conio.h>
struct Person{
	char person[100];
	int id;
	int IQ;

};
void main()
{

	struct Person p;

	clrscr();
	flushall();
	printf("Enetr Person Name : ");
	scanf("%s",&p.person);

	printf("Enter ID of person : ");
	scanf("%d",&p.id);

	printf("Enter IQ of person : ");
	scanf("%d",&p.IQ);

	printf("\n%s\t %d\t %d\t",p.person,p.id,p.IQ);
getch();
}
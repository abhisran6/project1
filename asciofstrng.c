#include<stdio.h>
void main()
{
	char st[10];
	int i;
	printf("Enter any string: ");
	scanf("%s",st);
	for(i=0;st[i]!='\0';i++)
	printf("%d\n",st[i]);
	getch();
}

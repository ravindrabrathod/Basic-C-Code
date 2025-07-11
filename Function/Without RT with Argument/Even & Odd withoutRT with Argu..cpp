//PRINT EVEN & ODD NUMBER BY WITHOUT RETURN TYPE WITH ARGUMENTS.
#include<stdio.h>
void even(int);
main()
{
	int a;
	printf("Enter the num :");
	scanf("%d",&a);
	even(a);
}
void even(int a)
{

	if(a%2==0)
	printf("%d even num.",a);
	else
	printf("%d odd num.",a);
}


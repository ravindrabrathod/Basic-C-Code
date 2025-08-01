// Program for understanding the concept of array of pointers :
#include<stdio.h>
int main()
{
	int *p;
	int  (*ptr)[5],a[5],i;
	p=a;
    ptr=&a;
    
    for(i=0;i<5;i++)
    {
	printf("Enter the elements :");
    scanf("%d",&a[i]);
    }
	for(i=0;i<5;i++)
	printf("%u\t%u\n",p+i,ptr+i);
}

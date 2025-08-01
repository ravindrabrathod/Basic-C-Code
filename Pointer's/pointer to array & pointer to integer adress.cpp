// Program  to understand difference betweeen pointer to an integer and pointer to an array of integer :
#include<stdio.h>
int main()
{
	int *p;
	int (*ptr)[5],a[5];
	p=a;
	ptr=&a;
	printf("p=%u\tptr=%u\n",p,ptr);
	p++;
	ptr++;
	printf("p=%u\tptr=%u\n",p,ptr);
	p--;
	ptr--;
	printf("p=%u\tptr=%u\n",p,ptr);
	p--;
	ptr--;
	printf("p=%u\tptr=%u",p,ptr);
	
}

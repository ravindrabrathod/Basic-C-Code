// WAP TO PIRINT DECIMAL TO BINARY BY USING ARRAYS

#include<stdio.h>
main()
{
 int a[5],i,j,n=12;
 for(i=0;i<5;i++)
 {
 	a[i]=n%2;
 	n/=2;
 	i++;
 }	
	 for(j=i-1;j>0;j--)
	 	printf("%d",a[j]);
}

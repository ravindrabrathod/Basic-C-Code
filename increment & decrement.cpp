//INCREMENTAL AND DECREMENTAL




#include<stdio.h>            //post increment
main()
{
	int a=5;
	int b=a++;
	printf("%d",b); //5
}




#include<stdio.h>             //pre increment
main()
{
	int a=5;
	int b=++a;
	printf("%d",b); //6
}




#include<stdio.h>             //post decrement
main()
{
	int a=5;
	int b=a--;
	printf("%d",b); //5
}




#include<stdio.h>             // pre decrement
main()
{
	int a=5;
	int b=--a;
	printf("%d",b); //4
}




#include<stdio.h>                // practise H.W
main()
{
	int a=10;
	int b=a++;
	printf("%d,%d \n",a,b); //11,10
	b=--a;
	printf("%d,%d \n",a,b);// 10,10
	b=a--;
		printf("%d,%d",a,b);// 9,10
}





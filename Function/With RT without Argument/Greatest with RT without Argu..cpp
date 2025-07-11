//PRINT GREATEST THREE NUMBER WITH RETURN TYPE WITHOUT ARGUMENTS

#include<stdio.h>
int greatest ();       //DECLARATION
main()
{	
	printf("%d is greatest",greatest());  //CALLING
}
int greatest()                           //DEFINATION
{
	int a,b,c;
	printf("Enter the number a,b&c :");
	scanf("%d%d%d",&a,&b,&c);
	int d=(a>b?(a>c?a:c):(b>c?b:c));
	return d;
	
	// also we can write in this formate 
	
//	if(a>b && a>c)
//	return a; 
//	else
//	{
//	if(b>a && b>c)
//	  return b;
//	else
//     return c;
//		}
	
}

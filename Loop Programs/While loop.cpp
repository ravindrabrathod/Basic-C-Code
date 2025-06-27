// QUETIONS AND ANSWERS FOR WHILE LOOP 



//1.//print even number upto n by using while loop

#include<stdio.h>
main()
{
	int n,i=2;
	printf("Enter the number :");
	scanf("%d",&n);
	while (i<=n)
	{
		if(i%2==0)           // condition to print even number        
		printf("%d\n",i);
		i++;		
	}
}





//2.//print odd number upto n by using while loop
#include<stdio.h>
main()
{
	int n,i=1;
	printf("Enter the number :");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)       // condition to print odd number
		printf("%d\n",i);
		i++;
	}	
}





//3.//print even number from n to zero
#include<stdio.h>
main()
{
	int n,i;
	printf("Enter the number :");
	scanf("%d",&n);
	i=n;            // initilizing i here if i=n then  
	while(i>0)
	{
		if(i%2==0)
		printf("%d\n",i);
		i--;              //post decreament
	}
}





//4.//print odd number from n to zero
#include<stdio.h>
main()
{
	int n,i;
	printf("Enter the number :");
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
		if(i%2!=0)
		printf("%d\n",i);
		i--;
	}
}





//5.//print table by using while loop
#include<stdio.h>
main(){

int n,i=1;
printf("Enter the number :");
scanf("%d",&n);
while(i<=10)  // taken 10 here becz we have to print till 10
{
printf("%d * %d = %d \n",n,i,n*i);
	i++;
}
}





//6.//print natural number in between two numbers
#include<stdio.h>
main(){
	int i,a,b,c=0;
	printf("Enter the number :");
	scanf("%d%d",&a,&b);	
if(a<b)   //we dont know which one is big that why take this cond.
	{
	}
else
	{
		c=a;   //swaping the variable
		a=b;
		b=c;
}
   i=a+1;
	while(i<b)
	{	
	printf("%d\n",i);
	i++;
}}





//7.//print even number in between two numbers
#include<stdio.h>
main()
{
	int i,a,b,c=0;
	printf("Enter the number :");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
	}
	else{
		c=a;
		a=b;
		b=c;
	}
	i=a+1;  //initialize before while
	while(i<b)
	{
		if(i%2==0)
		printf("%d\n",i);
		i++;
	}
	}





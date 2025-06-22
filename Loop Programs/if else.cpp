// QUETION AND ANSQWER FOR IF-ELSE STATEMENT



#include<stdio.h>                                    //GREATEST TWO NUMBER & SAME
main()
{
	int a,b;
	printf("Enter a&b ");
	scanf("%d%d",&a,&b);
	if(a>b)	
	printf("%d is the greatest number a:",a);
	 	 
else {
if (a<b)
       	printf("%d is the greatest number b:",b);
	
	else
	printf ("%d is same");}
}


#include<stdio.h>                                     // EVEN AND ODD
	main()
	{
		int a;
		printf("Enter a number :");
		scanf("%d",&a);
		if(a%2==0)
		printf("%d number is even.",a);
		else
		printf("%d number is odd.",a);
	}
	
	
	
	#include<stdio.h>                              // VOWELS & CONSONENT
	main()
	{
		int c;
		printf("Enter a char :");
		scanf("%c",&c);
		if(c=='a')
		printf("%c it is vowels.",c);
		
		else		
			{
			if (c=='e')
			printf("%c it is vowels.",c);
			else{
				if(c=='i')
				printf("%c it is vowels.",c);
				else{
					if(c=='o')
					printf("%c it is vowels.",c);
					else{
						if(c=='u')
						printf("%c it is vowels.",c);
						else
					printf("%c it is not vowels its consonant.",c);
				}
				}
				
			}
		}
	}
	
	
	
	#include<stdio.h>                                 // POSITIVE & NEGATIVE
	main()
	{
		int a;
		printf("Enter a number :");
		scanf("%d",&a);
		if(a>0)
		printf("%d it is positive.",a);
		else 
		printf("%d it is negative.",a);
	} 
	
	#include<stdio.h>                               // GREATEST THREE NUMBER
	main()
	{
		int a,b,c;
		printf("Enter number a,b,c :");
		scanf("%d%d%d",&a,&b,&c);
		if (a>b)
		{
		
	      if(a>c)
			printf("%d it is greatest.",a);
			else
			printf("%d it is greatest",c);
		}
		else 
			
			if(b>c)
				printf("%d it is greatest.",b);
				else
				printf("%d it is greatest.",c);
		}
		
				
	#include<stdio.h>                                //LEAP YEAR
	main()
	{
		int a;
		printf("Enter the year :");
		scanf("%d",&a);
		if(a%4==0)
			printf("%d it is a leap year.",a);
		else if(a%100==0)
			printf("%d it is a leap year.",a);
		else if(a%400==0)
			printf("%d it is a leap year.",a);
		else
	        printf("%d it is not leap year.",a);
		
		}
			
	
		#include<stdio.h>                    // MSG IF -VE NUMBER ENTER
		main()
		{
			int a;
			printf("Enter anumber :");
			scanf("%d",&a);
			if(a<0)
			printf("got a msg.",a);
		}
		
		
		#include<stdio.h>                         //MARKS IN GRADE
		main()
		{
			int marks;
			printf("Enter a marks :");
			scanf("%d",&marks);
		if (marks>=500)
			printf("%d is A grade.",marks);
		else if(marks>=400&&marks<500)
			printf("%d is B grade.",marks);
		else
			printf("%d is fail.",marks);
		}
}
	

	
	
	
	
	
	
	
	
	
	
	
	
	

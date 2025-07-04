// SWITCHED LOOP CASES:

#include<stdio.h>
main()
{
	int f,b,a;
	printf("enter choice number :");
	scanf("%d",&a);
	switch(a)
	{
		case 1:                                      //FACTORIAL
			{	
			int n,i,fact=1;
			printf("enter factorial number :");
			scanf("%d",&n);
			for(i=1;i<=n;i++)
				fact*=i;	
			printf("factorial no.%d",fact);
			break;
		}
			
	    	case 2:                                    // CONDITION OPERATOR
	    		{
				
			int f,b;
			printf("Enter a&b");
			scanf("%d %d",&f,&b);
			f>b?printf("f is greater"):printf("b is greater");
			break;
		}
		    case 3:                                       // ADDITION
		    	{
		    		int n,i;
		    		printf("Enter the number n&i :");
		    		scanf("%d%d",&n,&i);
		    		n+i;
		    		printf("%d",n+i);
		    		break;		
				}
				case 4:                                   //POSITIVE & NEGATIVE
					{
						int a;
						printf("Enter the number :");
						scanf("%d",&a);
						if (a<0)
						printf("%d is negative.",a);
						else
						printf("%d is positive.",a);
						break;
						
					}
					case 5:                                      //EVEN AND ODD
						{
							int a;
							printf("Enter the number :");
							scanf("%d",&a);
							if(a%2==0)
							printf("%d is even number.",a);
							else 
							printf("%d is odd number.",a);
							break;
						}
						case 6:                                       //TABLE NUMBER
							{
								int a,i;
								printf("which table u want :");
								scanf("%d",&a);
								for(i=1;i<=10;i++)
								printf("%d*%d = %d\n",a,i,a*i);	
								break;
							}
							case 7:                                     //GREATEST NUMBER
								{
									int a,b;
									printf("Enter the number :");
									scanf("%d%d",&a,&b);
									if(a>b)
									printf("%d is greatest.",a);
									else 
									printf("%d is greatest.",b);
									break;
								}
								case 8:                                   //OCTAL HEXA.NUMBER
									{
										int a,b;
										printf("Enter the number :");
										scanf("%d%d",&a,&b);
										printf("%x\n%o",a,b);
										break;
									}
									case 9:                            // VOWELS AND CONSONENT
										{
											int c;
											printf("Enter the character :");
											scanf("%c",&c);
											if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                                           	printf("%c is vowels.",c);
											else
											printf("%c is consonant.",c);
                                                break;
										}
										case 10:                    // NATURAL NUMBER IN REVERSE
											{
											int n,i;
												printf("Enter the number :");
												scanf("%d",&n);
												i=1;
												while(i<=n){
											printf("%d is natural num.\n",n);
												n--;
//												if(i==n){
//												 break;
										}
											}
	}
}



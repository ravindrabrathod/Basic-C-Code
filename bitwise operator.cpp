// BITWISE OPERATOR <<,>>,&,|,^,~
                                      //QUETION & ANSWER FOR BITWISE OPERATOR


#include<stdio.h>
main()
{
int a=5;
	int b=3;
	printf("%d",a&b);    //1 (0001) & AND operator
}

#include<stdio.h>
main()
{
	int a=12;
	int b=9;
	printf("%d",a|b);     //13 (1101) | OR operator
}

#include<stdio.h>
main()
{
	int a=8;
	int b=10;
	printf("%d",a^b);     //2 (0010) ^ XOR operator
}

#include<stdio.h>
main()
{
	int a=10;
	int b=a<<2;
	printf("%d",a);      //10 (0010 1000) << left shift
}

#include<stdio.h>
main()
{
	int a=10;
	int b=a>>2;
	printf("%d",a);      //10 (0000 1010) >> right shift
}




#include<stdio.h>
main()
{
	int a,b;
	printf("enter a number :");
	scanf("%d%d",&a,&b);
	printf("%s",a>0?(a>0?+ve:-ve):a<0?-ve:zero);
}






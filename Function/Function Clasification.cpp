// CLASSIFICATION OF FUNCNTION

#include<stdio.h>                  //WITHOUT ARGUMENT WITHOUT RETURN TYPE
void sum();
main()
{
	sum();
}
void sum()
{
	int a=55,b=10,c=0;
	c=a+b;
	printf("sum=%d",c);
}





#include<stdio.h>    //WITHOUT ARGUMENT WITH RETURN TYPE 
int sum();
int main()
{
	int x,y,z;
//	printf("Enter x&y :");
//	scanf("%d%d",&x,&y);
	z=sum();
	printf("sum=%d",z);
}
int sum()
{
	int x,y;
	printf("Enter x&y :");
	scanf("%d%d",&x,&y);
	return x+y;
}






#include<stdio.h>         //WITHOUT RETURN TYPE WITH ARGUMENTS
void sum(float,float);
 main()
{
	float x,y;
	printf("Enter float x&y :");
	scanf("%f%f",&x,&y);
	sum(x,y);
}
void sum(float x,float y)
{

	printf("%f",x+y);
}






#include<stdio.h>     //WITH RETURN TYPE WITH ARGUMENTS
int sum(int,int);
int main()
{
	int a,b,c;
	printf("Enter A&B :");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("sum=%d",c);
}
int sum(int a,int b)
{
	return a+b;
}


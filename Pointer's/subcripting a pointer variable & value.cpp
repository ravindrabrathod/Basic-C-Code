// program to print the value and address of array.elements by subcripting a ppointer variable :
 #include<stdio.h>
 int main()
 {
 	int i,a[5]={5,10,15,20,25},*ptr;
 	ptr=a;
 	for (i=0;i<5;i++)
 	{
 		printf("the value of a[%d]= %u %u %u %u \t",i,&a[i],&ptr[i],a+i,ptr+i);
 		printf("the address of a[%d] = %d %d %d %d \n",i,*(a+i),*(ptr+i),a[i],ptr[i]);
	}
 }	zz

//Program to print the value. and address of elements of an array using pointer notation :
 #include<stdio.h>
 main()
 {
 	int i,a[5]={1,2,3,4,5};
 	for (i=0;i<5;i++)
 	{
 		printf("value of a[%d] = %d\t",i,*(a+i));
 		printf("Adress of a[%d]=%u\n",i,a+i);
 		
 		printf("value of a[%d] = %d\t",i,*a[i]);
	 }
 }

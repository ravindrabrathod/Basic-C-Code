//VOWELS AND COSONENT

/*
#include<stdio.h>
main()
{
	int z;
	printf("enter a variable :");
	scanf("%c",&z);
	if(z== 'a'){
	
	printf("%s","it is vowels");
}
		else if (z== 'e'){
	
	printf("%s","it is vowels");}
	else if (z== 'i'){
	
	printf("%s","it is vowels");
}
else if (z== 'o'){
	
	printf("%s","it is vowels");
}else if (z== 'u'){
	
	printf("%s","it is vowels");
}
	else{	
		printf("it is consonant");
		}
}
*/

#include <stdio.h>
main()
{
	int c;
	printf("Enter the character :");
	scanf("%c",&c);
	printf("%s",c=='a'||c=='e'||c=='i'||c=='o'||c=='u'?"this char is vowel":"this char is consonant");
}                   




















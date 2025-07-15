//PRINT VOWELS WITHOUT RETURN TYPE WITH ARGUMENTS

#include<stdio.h>
void palindrome(char);
main()
{
	char a;
	printf("Enter the character :");
	scanf("%c",&a);
	palindrome(a);
}
void palindrome(char a)
{
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	printf("%c is vowel.",a);
	else
	printf("%c is consonent.",a);
	
}


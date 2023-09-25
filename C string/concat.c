#include<stdio.h>
void uconcat(char*, char*);
int main()
{
	char str1[10], str2[10];
	printf("Enter the first string=");
	scanf("%s",str1);
	printf("Enter the second string=");
	scanf("%s",str2);
	uconcat(str1,str2);
	printf("%s",str1);
	return 0;
}
void uconcat(char* a, char* b)
{
	while(*a!='\0')
	{
		a++;
	}
	while(*b!='\0')
	{
		*a=*b;
		a++;
		b++;
	}
	*b='\0';
}

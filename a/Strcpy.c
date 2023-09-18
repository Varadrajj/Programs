#include<stdio.h>
void ustrcpy(char*, char*);
int main()
{
	char str1[10], str2[10];
	printf("Enter the string=");
	scanf("%s",str1);
	ustrcpy(str1,str2);
	printf("Copied string=%s",str2);
	return 0;
	
}
void ustrcpy(char* a, char* b)
{
	while(*a!='\0')
	{
		*b=*a;
		*a++;
		*b++;
		
		
	}
}

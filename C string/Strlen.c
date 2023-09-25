#include<stdio.h>
int ustrlen(char *);

int main(){
	int length;
	char str[10];

	printf("Enter the string=");
	scanf("%s",str);
	length = ustrlen(str);
	printf("%d",length);
	return 0;
}
int ustrlen(char* b)
{
	int length=0;

	while(*b!='\0')
{
	*b++;
	length++;	
}
	return length;
}
		



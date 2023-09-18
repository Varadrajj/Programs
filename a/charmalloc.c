#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *ptr;
	int n;
	printf("Enter no. of Characters :");
	scanf("%d",&n);
	ptr=(char*)malloc(n*sizeof(char)+1);
	printf("Accept String :\n");
	scanf("%s",ptr);
    printf("Display String=\n");
    printf("%s",ptr);
    free(ptr);
}

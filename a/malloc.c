#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int i,n,sum=0;
	printf("Enter no. of Elemnts :");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("Accept Elements for the array :\n");
	for(i=0;i<n;i++)
	scanf("%d",(ptr + i));
	for(i=0;i<n;i++)
    sum = sum + *(ptr+i);
    printf("Summation is :%d\n",sum);
    free(ptr);
}

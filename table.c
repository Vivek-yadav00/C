#include<stdio.h>
int main()
{
	int n;
	printf("enter a table of ");
	scanf("%d",&n);
	
	for(int i=0;i<11;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
	return 0;
}

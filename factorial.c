#include<stdio.h>
int f(int number)
{
	if (number==1 || number ==0)
	{
		return 1;
	}
	else 
	{
		return (number*f(number-1));
	}
}
int main()
{
	int a;
	printf("enter a number\t");
	scanf("%d",&a);
	printf("the factorial of %d is %d",a,f(a));
	return 0;
}

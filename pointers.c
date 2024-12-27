#include<stdio.h>

int main()
{
	printf("Let's' learn pointers\n");
	int a=5;
	int *p = &a;
	printf(" the value is %d",*p);
	
	printf(" the value is %xd",&a);
	return 0;
}

#include<stdio.h>

int main()
{
	printf("Let's' learn pointers part 2 \n");
	char a=34;
	int *ptr=&a;
	printf(" one %d\n",*ptr);
	printf("two %d\n",ptr);
	printf("three %d\n",ptr+1);
	
	return 0;
}

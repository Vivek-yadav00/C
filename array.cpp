#include <stdio.h>
int main()
{
	int marks[4];
	for (int i = 0; i < 4; i++)
	{
		printf("Enter the value of %d array\n", i);
		scanf("%d", &marks[i]);
		printf("Enter value for %d value is %d\n\n", i, marks[i]);
	}
	return 0;
}

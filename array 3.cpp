#include<stdio.h>
int main()
{
	int marks[2][4]={{45,56,67,87},
			{3,4,2,6}};
		for (int i=0;i<2;i++){
			for (int j=0;j<4;j++){
				printf("Enter value for %d,%d value is %d\n",i,j,marks[i][j]);	
			}
		
	}
	return 0;
}

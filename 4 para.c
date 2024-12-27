//#include<stdio.h>
//int sum(int a,int b)
//{
//	return a+b;
//}
//int main()
//{
//	int a=9,b=5,c;
//	c=sum(a,b);
//	printf(" The sum is : \n %d",c);
//	return 0;
//} /*Argument with return value*/
//
//
//#include<stdio.h>
//void printstar(int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		printf("%c",'*'); 
//	}
//}
//int main()
//{
//	printstar(7);
//	return 0;
//} /*Argument with no return value*/



#include<stdio.h>
int takenumber()
{
	int i;
	printf("Enter a number");
	scanf("%d",&i);
	return i;
}
int main()
{
	int c;
	c=takenumber();
	printf("The number entered is %d \n",c);
	return 0;
} /* without Argument with return value*/

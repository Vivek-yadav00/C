#include<stdio.h>
{
	int age,marks;
	printf("Enter your age\t");
	scanf("%d",&age);
	
	printf("Enter your marks\t");
	scanf("%d",&marks);
	
	switch(age){
		case 3:
			printf("The age is 3");
			switch(marks){
				case 11:
					printf("The marks is 11");
					break;
					
				case 21:
					printf("The marks is 21");
					break;
					
				default:
					printf("Marks is not applicable");
					}
			break;
		
		case 13:
			printf("The age is 13");
			break;
			
		case 23:
			printf("The age is 23");
			break;
			
		default:
			printf("Age is not applicable");
		}
		return 0;
}

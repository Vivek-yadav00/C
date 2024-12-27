#include<stdio.h>
int main(){
	int i;
	printf("Enter a number\t");
	scanf("%d",&i);
	for(i=0;i<20;i++){
		printf("%d",i);
		if (i<5){
			break;
		}		
	}
	return 0;
}

#include<stdio.h>
int main(){
	int i,j,num;
	for(i=0;i<7;i++){
		printf("%d\n",i);
		printf("Enter number for exit\n");
		scanf("%d",&num);
			if (num==0){
			goto end;
			}
	}
	end:
	return 0; 
}

#include<stdio.h> 
int main()
{
	int a;
	scnaf("%d",&a);
	int l[a];
	for(int i=0;i<a;i++){
		scanf("%d",&l[i]);
	}
	
	for(int i=0;i<a;i++){
		printf("%d ",l[i]);
}
	
	
	
	printf("double size is %lu",sizeof(l));
	return 0;
}

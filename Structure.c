#include<stdio.h>
#include<string.h>
struct stu{
	int id;
	int marks;
	char name;
}vivek,yadav;
int main(){
	vivek.id=1;
	yadav.id=2;
	vivek.marks=499;
	yadav.marks=873;
	vivek.name ='rikep';
	yadav.name ="shinexcp";
	printf("Vivek id %d\n",vivek.id);
	printf("yadav id %d\n",yadav.id);
	printf("Vivek im %d\n",vivek.marks);
	printf("yadav im %d\n",yadav.marks);
	printf("Vivek name %s\n",vivek.name);
	printf("yadav name %s\n",yadav.name);
	return 0;
}

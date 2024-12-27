#include<stdio.h>
#include<string.h>
int main(){
	char s2[]="yadav";
	char s1[]="vivek";
	printf("The length of s1 and s2 is %d and %d\n",strlen(s1),strlen(s2));
	
	printf("The reverse is:");
	puts(strrev(s2));
printf("The strcmp is : %d",strcmp(s1,s2));	
	return 0;
}

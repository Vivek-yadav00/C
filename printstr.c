#include<stdio.h>

printstr(char str[]){
	int i;
	while(str[i]!='\0'){
		printf("%c",str[i]);
//		printf("%s",str);
//	puts(str);
		i++;
	}
}

int main(){
//	char str[]={'v','i','v','e','\0','k','y','a'};
	char str[]="vivek\tyadav";
	printstr(str);
	return 0;
}

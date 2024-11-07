#include<stdio.h>
#include<string.h>
int main(){
	char name [100];
	int length=0;
	printf("enter name :- ",name);
//	scanf("%s",name);
//	printf("%.4s",name);
//	printf("%10.4s",name);
//	puts(name);
//	puts(name);
	gets(name);
	puts(name);
	printf("%s\n",&name[2]);
//	length= strlen(name);
//	printf("Length is :-  %d",length);
	for(int i=0;i<name[i]!='\0';i++){
		length++;
	}
	printf("Length is : - %d",length);  
}

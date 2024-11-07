#include<stdio.h>
main(){
	char ch;
	printf("enter a letter:- ",ch);
	scanf("%c",&ch);
	if((ch>='a' && ch<='z') || (ch>'A' && ch<'Z'))
		printf("alphabet");
	else
		printf("not a alphabet");
	
	
}

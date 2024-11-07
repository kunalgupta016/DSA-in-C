#include<ctype.h>
#include<stdio.h>
int main(){

 	char ch;
	printf("Enter a character ",ch);
	scanf("%c",&ch);
    ch=toupper(ch);
	switch(ch){
		case 'A':
			printf("First Letter \n");
			break;
		
		case 'Z':
			printf("last letter \n");
			break;
		default :
			printf("Any Letter \n");
			break;
	}
	
	return 0;
	
}

#include<stdio.h>
#include<string.h>

int main(){
	char ch[100];
	int l=0;
	printf("enter a string:-",ch);
	gets(ch);
	
	for(int i=0;ch[i]!='\0';i++){
		printf("%c ",ch[l]);
		l++;
	} 
}

#include<stdio.h>
#include<string.h>
int main(){
	char s1[100],ch;
	int len1=0;
	printf("Enter a string:- ",s1);
	gets(s1);
	len1=strlen(s1);
	printf("%d\n",len1);
//	reverse string with strrev function
//	strrev(s1);
//	puts(s1);
	
//	reverse string without strrev function
	for(int i=0;i<len1/2;i++){
		ch=s1[i];
		s1[i]=s1[len1-1-i];
		
	}
	puts(s1);
	
}

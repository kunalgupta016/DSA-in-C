#include<stdio.h>
#include<string.h>
int main(){
	char s1[30],s2[30];
	int len1,len2;
	printf("\nwrite First name :- ",s1);
	gets(s1);
	puts(s1);
	printf("\nwrite Surname:- ",s2);
	gets(s2);
	puts(s2);
//	conctenate string using strcat
//printf(" After The concatenate of Two Strings :- \n");
//	strcat(s1,s2);
//	puts(s1);
//	conctenate two strings without strcat
	len1=strlen(s1);
	len2=strlen(s2);
	for(int i=0;i<=len2;i++){
		s1[len1]=s2[i];
		len1++;
	}
	puts(s1);
}

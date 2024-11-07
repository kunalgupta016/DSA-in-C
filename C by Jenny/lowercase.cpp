#include<stdio.h>
#include<string.h>
int main(){
	char s1[100];
	printf("enter string :- ",s1[100]);
	gets(s1);
	puts(s1);
//	lower case using strlwr
//	strlwr(s1);
//	printf("%s",s1);
//	withouts using srtrlwr

	for(int i=0;s1[i]!='\o';i++){
		if(s1[i]>=65 && s1[i]<=90){
			s1[i]=s1[i]+32;
		}
	}
	printf("%s",s1);
	
}


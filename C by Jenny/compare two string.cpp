#include<stdio.h>
#include<string.h>
int main(){
	char s1[100],s2[100];
	int flag=0;
	int value,len1,len2;
	printf("\nwrite First string :- ",s1);
	gets(s1);
	puts(s1);
	printf("\nwrite Second String :- ",s2);
	gets(s2);
	puts(s2);
//	compare strings with strcmp
//	value = strcmp(s1,s2);
//	if(value==0)
//		printf("same\n");
//	
//	else
//		printf("not same\n");
//	
//	printf("%d",value);
//	compare strings without strcmp
	len1=strlen(s1);
	len2=strlen(s2);
	printf(" the length of firts string %d\n",len1);
	printf("the lenght of second string %d\n",len2);
	printf("    \n");
	for(int i=0;s1[i]!=0|| s2[i]!=0;i++){
		if(s1[i]!=s2[i]){
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("not same ");
	}
	
}

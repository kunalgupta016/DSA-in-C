#include<stdio.h>

void modify(char[],char[]);
int main(){
	char str1[]="Kunal";
	char str2[]="Gupta";
	modify(str1,str2);
}
void modify(char str1[],char str2[]){
	int len;
	
	for(int i=0;str1[i]!='\0';i++){
		len=len+1;	
	}
	printf("%d\n",len);
	str2[1]='k';
	printf("%s%s",str1,str2);
} 

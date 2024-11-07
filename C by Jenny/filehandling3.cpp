#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp=NULL;
	char str[40]="kunal";
	fp=fopen("abc.txt","a");
	if(fp==NULL){
		printf("error");
		exit(1);
	}
	printf("enter the content ");
	gets(str);
	fprintf(fp,"\n%s",str);
	printf("successfully appended");
	fclose(fp);
}

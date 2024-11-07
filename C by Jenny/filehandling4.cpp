#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp=NULL;
	char str[40]="kunal";
	fp=fopen("abc.txt","r+");
	if(fp==NULL){
		printf("error");
		exit(1);
	}
	fputs("kunal ",fp);
	fclose(fp);
}

#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp=NULL;
	char a='b';
	int c=50;
	char b[20]="kunal gupta";
	fp=fopen("abc.txt","w");
	if(fp==NULL){
		printf("NO file");
		exit(1);
	}
	else{
		fputc(a,fp);
	fputs(b,fp);
	fprintf(fp,"%d %s",c,b);
	}
	
	fclose(fp);
	
	
	
}

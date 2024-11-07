#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp=NULL;
	char c[69]="kunal is is";
	fp=fopen("abc.txt","r");
	if(fp==NULL){
		printf("ERROR");
		
	}
	else {
		while(!feof(fp)){
		fgets(c,6,fp);
		printf("%s",c);	
		}
		
	}
	fclose(fp);
	return 0;
	
	
	
	
}

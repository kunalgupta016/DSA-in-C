#include<stdio.h>
int main(){
	int i,j,side;
	printf("enter the side :- ");
	scanf("%d",&side);
//	for hollow rectangle 
	for(i=1;i<=side;i++){
		for(j=1;j<=side;j++){
			if(i==1 || j==1 || i==side || j==side || i==j || j==side-i+1){
				if(i==j || j==side-i+1){
					printf("$");
				}
				else{
					printf("*");
				}
			
			}
			else{
				printf(" ");
			}
				
			}
		printf("\n");
		}
		return 0;
	}


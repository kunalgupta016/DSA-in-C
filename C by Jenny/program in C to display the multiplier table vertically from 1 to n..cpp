#include<stdio.h>
int main(){
	int i,n;
	printf("enter a number : - ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(int j=1;j<=10;j++){
			printf("%d * %d = %d \n",j,i,i*j);
		}
		printf("\n");
	}
}

#include<stdio.h>
int main(){
	int i,n,sum=0;
	printf("enter a number : - ",n);
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i%2!=0){
			printf("%d \n",i);
			sum=sum+i;
		}
		
	}
	printf("The sum is : - %d",sum);
}

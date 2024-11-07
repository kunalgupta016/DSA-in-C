#include<stdio.h>
int main(){
	int n,i=2;
	printf("enter a value : \n",n);
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			printf("number is not a prime ");
			exit;
		}
			
		i++;
		
		
		
	}
	printf("number is prime");
	
	return 0;
	
}

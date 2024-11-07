#include<stdio.h>
// program in C to display the multiplication table for a given integer.

int main(){
	int i,n;
	printf("Enter the number : - ",n);
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		printf("%d * %d = %d \n",n,i,n*i);
	}
}

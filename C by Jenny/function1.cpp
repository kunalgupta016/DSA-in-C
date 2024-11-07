#include<stdio.h>

int main(){
	void sum();
	sum();
	
}
void sum(){
	int a,b,sum=0;
	printf("enter two numbers:- ");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("\nThe Sum ofn two numbers is :- %d",sum);
}

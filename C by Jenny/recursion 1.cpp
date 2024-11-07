#include<stdio.h>
int factorial(int n){
	if (n<1){
		return 1;
	}
	else{
		
		return n*factorial(n-1);
		
		
	}
}
int main(){
	int a;
	printf("enter a number : -");
	scanf("%d",&a);
	printf("factorial of %d = %d\n",a,factorial(a));
	return 0;
	
}

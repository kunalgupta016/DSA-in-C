#include <stdio.h>
int main(){
	int num1,num2;
	int operators;
	printf("Enter first number :-",num1);
	scanf("%d",&num1);
	printf("Enter the operator +,-,*,/ as 1,2,3,4",operators);
	scanf("%d",&operators);
	printf("Enter your second number ",num2);
	scanf("%d",&num2);
	if(operators == 1)
		printf("%d",num1+num2);
	
	else if (operators == 2)
		printf("%d",num1-num2);
	
	else if (operators == 3)
		printf("%d",num1*num2);
	
	else if(operators == 4)
		printf("%f",num1/num2);
	
	else
		printf("\n \n  you enter wrong operator");


	
	return 0;
}

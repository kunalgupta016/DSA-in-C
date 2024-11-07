#include <stdio.h>
main(){
	int number;
	printf("Enter a Number :- ",number);
	scanf("%d",&number);
	if(number<0)
		printf("number is negative");
	else if(number>0)
		printf("Number is positive");
	else
		printf("Number is zero");
	
}

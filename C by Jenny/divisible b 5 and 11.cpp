#include <stdio.h>
main(){
	int number;
	printf("Enter a Number :- ",number);
	scanf("%d",&number);
	if((number%5==0)&&(number%11==0))
		printf("number is divisible by 5 and 11 both ");
	else 
		printf("number is not divisible by 5 and 11");
		
}

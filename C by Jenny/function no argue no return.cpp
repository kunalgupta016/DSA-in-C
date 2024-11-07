#include<stdio.h>
void sum(void);
int main(){
	sum();
}
void sum(){
	int x=5,y=8;
	int sum=0;
	sum=x+y;
	printf("sum=%d\n",sum);
}

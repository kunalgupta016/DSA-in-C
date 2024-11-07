#include<stdio.h>
int sum(void);
int main(){
	int s;
	s=sum();
	printf("sum=%d\n",s);
}
int sum(){
	int x=5,y=8;
	int sum=0;
	sum=x+y;
	return sum;
}

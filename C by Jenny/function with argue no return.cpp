#include<stdio.h>
void sum(float,float);
int main(){
	sum(3.4,5.7);
	
}
void sum(float x,float y){
	float sum=0;
	sum=x+y;
	printf("sum=%f\n",sum);
}

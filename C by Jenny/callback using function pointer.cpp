#include<stdio.h>
int sum(int a,int b){
	printf("sum=%d\n",a+b);
}
int sub(int a, int b){
	printf("sub=%d\n",a-b);
}
void display(int (*ptr)(int,int)){
	(*ptr)(4,5);
}
int main(){
	display(sum);
	display(sub);
}

#include<stdio.h>
int main(){
	
	int swap(int ,int);
	swap(7,8);
}
int swap(int a,int b){
	printf("---------------------------------------\n");
	printf("before swapping \n");
	printf("the value of a =%d\n",a);
	printf("the value of b=%d\n",b);
	
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("----------------------------------------\n");
	printf("after swapping \n");
	printf("the value of a=%d\n",a);
	printf("the value of b = %d\n",b);
}

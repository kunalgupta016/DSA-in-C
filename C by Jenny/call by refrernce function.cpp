#include<stdio.h>
int main(){
	void fun(int* ,int*);
	int x=5;
	int y=7;
	fun(&x,&y);
	printf("x=%d\ny=%d\n",x,y);
}

void fun(int *x, int *y){
	*x=7;
	*y=5;
	printf("x=%d\ny=%d\n",*x,*y);
}

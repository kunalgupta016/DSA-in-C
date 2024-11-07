#include<stdio.h>
void f(int *p,int m){
	m=m+5;
	*p=*p+m;
	return ;
}
int main(){
	int i=5,b=10;
	f(&i,b);
	printf("%d",i+b);
}

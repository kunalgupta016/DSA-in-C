#include<stdio.h>
int main(){
	int a=10;
	int *p,**q,***r;
	p=&a;
	q=&p;
	r=&q;
	printf("a= %d %d %d %d ",a,*p,**q,***r);
	***r=50;
	printf("a=%d",a);
}


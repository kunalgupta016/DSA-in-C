#include<stdio.h>
int main(){
	int d;
	int a[]={0,1,-1,10,11};
	int *p=&a[0];
	int *q=&a[4];
	d=p-q;
	printf("d=%d\n",d);
	*q=25;
	d=q-p;
	printf("d=%d\n",d);
	*p=27;
	q=q-3;
	printf("q=%d\n",q);
	p=p+3;
	printf("p=%d\n",p);
	d=p-q;
	printf("d=%d\n",d);N
}

#include<stdio.h>
int* returnpointer(int[]);
int main(){
	int *r;
	int a[]={1,2,3,4,5,9};
	r=returnpointer(a);
	printf("%d",*r);
}
int* returnpointer(int a[]){
	a=a+2;
	return a;
}

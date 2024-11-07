#include<stdio.h>
int sum(int a){
	if(a==1){
		return a;
	}
	else{
		int s=0;
		s=a+sum(a-1);
		return s;
	}
}
int main(){
	int a,n;
	printf("enter the nth natural number :- ");
	scanf("%d",&n);
	a=sum(n);
	printf("%d",a);
}

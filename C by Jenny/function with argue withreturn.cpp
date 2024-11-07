#include<stdio.h>
int sum(int , int );
int main(){
	int x,y,c;
	printf("enter the two  numbers:- \n");
	scanf("%d%d",&x,&y);
	c=sum(x,y);
	printf("sum=%d\n",c);
}
int sum(int a,int b){
	return a+b;
}

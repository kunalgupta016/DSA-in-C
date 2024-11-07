#include<stdio.h>
int sum(int , int);
int main(){
	int s=0;
	int (*ptr)(int,int)=&sum;
	s=(*ptr)(4,5);
	printf("%d\n",s);
	
}
int sum(int a,int b){
	return a+b;
}


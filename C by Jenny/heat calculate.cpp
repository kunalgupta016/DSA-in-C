#include<stdio.h>
int main(){
	int I,R,T,H;
	printf("enter the value of current :-",I);
	scanf("%d",&I);
	printf("enter the value of resistance:-",R);
	scanf("%d",&R);
	printf("enter the value of time :-",T);
	scanf("%d",&T);
	H=I*I*R*T;
	prinf("the value of heat is :- %d",H);
}

#include<stdio.h>
struct question{
	int a;
	float b;
	int c;
};
int main(){
	struct question q={
		.b=1,.c=10,.a=3
	};
	printf("%d %f %d",q.a,q.b,q.c);
}

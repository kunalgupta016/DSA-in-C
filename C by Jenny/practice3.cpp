#include<stdio.h>
int main(){
	int a[2][2]={{2,3},{1,6}};
	printf("%d",&a[0][1]-&a[0][0]);
}


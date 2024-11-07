#include<stdio.h>
int main(){
	int i,a[10];
	for(i=1;i<=10;i++){
		printf("enter the %d value : - ",i,a[i]);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<=10;i++){
		printf("%d ",a[i]);
	}
}


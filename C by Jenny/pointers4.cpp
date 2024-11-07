#include<stdio.h>
int main(){
//	int a=10;
//	int *p=&a;
//	p=p+1;
//	printf("%d",*p);
	
	int a[5];
	printf("enter 10 array elements:- \n");
	for(int i=0;i<5;i++){
		printf("enter %d value:- ",i+1,a[i]);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
		
	}
	printf("\n");
	
//	int *p=&a[0];
//	printf("%d\n",*p);
//	p=p+1;
//	printf("%d\n",*p);
	
	for(int i=0;i<5;i++){
		printf("%d\n",*(a+i));
		
	}
	
	
	
}

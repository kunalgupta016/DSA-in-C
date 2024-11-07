#include<stdio.h>
int main(){
	int i,j,num,a[100],n;
	printf("enter a number :- ",n);
	scanf("%d",&n);
	
	for(i=0;i<=n-1;i++){
		printf("enter %d value ",i,a[i]);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<=n-1;i++){
		printf("%d",a[i]);
	}
	n++;
	for(i=n;i>=0;i--){
		a[i-1]=a[i-2];
	}
	printf("\n");
	printf("enter the new number / element ",num);
	scanf("%d",&num);
	a[0]=num;
	for(i=0;i<=n-1;i++){
		printf("%d",a[i]);
	}
		
}

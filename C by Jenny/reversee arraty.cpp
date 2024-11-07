#include<stdio.h>
int main(){
	int i,a[100],n;
	printf("how many you want to input the numbers :- ",n);
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		printf("enter the  %d value :- ",i,a[i]);
		scanf("%d",&a[i]);
	}
//	original array
	printf("the original array \n");
	for(i=0;i<=n-1;i++){
		printf("%d \n",a[i]);
	}
//	after reverse 
	printf("the reverse array \n");
	for(i=n-1;i>=0;i--){
		printf("%d \n",a[i]);
	}
	return 0;
	
}

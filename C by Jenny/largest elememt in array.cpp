#include<stdio.h>
int main(){
	int i,n,a[100],largest;
	printf("enter the value ",n);
	scanf("%d",&n);
	for(i=0;i<n;++i){
		printf("enter %d value ",i,a[i]);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;++i){
		if(a[i]>largest){
			largest=a[i];
		}
	}
	printf("largest is %d",largest);
}

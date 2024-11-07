#include<stdio.h>
int main(){
	int i,a[10],sum=0,n;
	printf("enter how many the number you enter in  array :- ",n);
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		printf("enter the %d value :- ",i,a[i]);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<=n-1;i++){
//		printf("%d",a[i]);
		sum=sum+a[i];
	}
	printf("%d",sum);
	
}

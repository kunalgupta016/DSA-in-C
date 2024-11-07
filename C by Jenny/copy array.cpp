#include<stdio.h>
int main(){
	int i,a[10],n,b[10];
	printf("enter how many the number you enter in  array :- ",n);
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		printf("the %d value :- ",i,a[i]);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++){
		b[i]=a[i];
	}
//	the first array
	printf("the first array\n");
	for(i=0;i<=n-1;i++){
		printf("%d \n",a[i]);
	}
	printf("the second array\n");
//	the second array (copy array)
	for(i=0;i<=n-1;i++){
		printf("%d \n",b[i]);
	}
}

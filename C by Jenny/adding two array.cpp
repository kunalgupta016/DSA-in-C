#include<stdio.h>
int main(){
	int i,j,a[100],b[100],c[200],n,m;
//	printf("how many elements you enter in array : - ",n);
//	scanf("%d",&n);
n=4;
m=4;
	for(i=0;i<n;i++){
		printf("%d value:- ",i,a[i]);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
		
	}
	printf("\n");
//	printf("how many elements you enter in array: - ",m);
//	scanf("%d",&m);
	for(i=0;i<m;i++){
	
		printf("%d value:- ",i,b[i]);
		scanf("%d",&b[i]);
	}
	for(i=0;i<m;i++){
		printf("%d ",b[i]);
		
	}
	for(int i=0;i<n;i++){
		c[i]=a[i];
	}
	for(int i=n;i<n+m;i++){
		j=0;
		
		c[i]=b[j];
		j++;
	}
	printf("\n");
	for(int i=0;i<n+m;i++){
		
		printf("%d",c[i]);
	}
	
}

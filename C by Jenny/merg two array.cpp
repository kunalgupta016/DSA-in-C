#include<stdio.h>
int main(){
	int i,j=0,a[10],b[10],c[30];
	printf("enter the value of array in first array length is 3 \n ");
	for(i=0;i<=2;i++){
		printf("enter the %d value : - ",i,a[i]);
		scanf("%d",&a[i]);
	}
	printf("enter the value of array in second array length is 4 \n");
	for(i=0;i<=3;i++){
		printf("enter the %d value : - ",i,b[i]);
		scanf("%d",&b[i]);
	}
//	merging array 
	for(i=0;i<=2;i++){
		c[i]=a[i];
	}
	for(i=3;i<=6;i++){
		c[i]=b[j];
		j++;
	}
	printf("the merged array is : - \n");
	printf("-----------------------------\n");
	for(i=0;i<=6;i++){
		printf("|%d|",c[i]);
	}
}

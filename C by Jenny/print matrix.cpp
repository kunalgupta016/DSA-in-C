#include<stdio.h>
int main(){
	int i,j,a[100][100],n,m,sum=0;
	printf("how many rows you want to print : - ",n);
	scanf("%d",&n);
	printf("how many columns you want to print : - ",m);
	scanf("%d",&m);
	printf("Write elemts of matrix : - \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("enter (%d,%d) value ",i,j,a[i][j]);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is : \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",a[i][j]);
			sum=sum+a[i][j];
		}
		printf("\n");
		printf("\n");
	}
	printf("\n The sum is %d",sum);
}

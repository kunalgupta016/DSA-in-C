#include<stdio.h>
int main(){
	int i,j,a[100][100],b[100][100],n,m,c[200][200],k,l;
	printf("Enter the elemnts of first matrix:-\n");
	printf("Enter how many rows you want to print :- ",n);
	scanf("%d",&n);
	printf("Enter how many columns you want to print :- ",m);
	scanf("%d",&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter the (%d,%d) value:- ",i,j,a[i][j]);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is :- \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the elemnts of Second matrix:-\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter the (%d,%d) value:- ",i,j,b[i][j]);
			scanf("%d",&b[i][j]);
		}
	}
	printf("The matrix is :- \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("the summation is :- \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
		for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
		
		
	}
	return 0;
}

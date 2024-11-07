#include<stdio.h>
int main(){
	int i,j,a[100][100],b[100][100],c[200][200],k,sum=0;
	printf("Enter the elemnts of first matrix:-\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the (%d,%d) value:- ",i,j,a[i][j]);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is :- \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the elemnts of Second matrix:-\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("Enter the (%d,%d) value:- ",i,j,b[i][j]);
			scanf("%d",&b[i][j]);
		}
	}
	printf("The matrix is :- \n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("the summation is :- \n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			sum=0;
			for(k=0;k<3;k++){
			sum=sum+a[i][k]*b[k][j];
			
			
			}
				c[i][j]=sum;
			
		}
	}
		for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
		
		
	}
	return 0;
}

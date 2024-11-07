#include<stdio.h>
int main(){
	int i,j,a[100][100],n,m,sumr=0,sumc=0;
	printf("How many rows u want to print: - ",n);
	scanf("%d",&n);
	printf("How many columns u wnat to print: - ",m);
	scanf("%d",&m);
	printf("Write the elemts of matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter (%d,%d) value",i,j,a[i][j]);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is : -\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		sumr=sumc=0;
		for(j=0;j<m;j++){
			
			sumr=sumr+a[i][j];
			sumc=sumc+a[j][i];
		}
			printf("\nThe sum of %d row = %d ",i+1,sumr);
			printf("\nThe sum of %d column = %d",i+1,sumc);
		printf("\n");
	}

	
	
	
return 0;	
}


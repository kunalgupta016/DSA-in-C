#include<stdio.h>
int main(){
	int i,a[100],j,temp,n;
	printf("Enter  how many array elements : - ",n);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter %d value ",i,a[i]);
		scanf("%d",&a[i]);
		
	}
//	for ascending order 
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	printf("ascending order :- \n");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	printf("descending order :- \n");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
}

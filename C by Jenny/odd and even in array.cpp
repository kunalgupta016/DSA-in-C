#include<stdio.h>
int main(){
	int i,n,j=0,k=0,a[100],even[100],odd[100];
	printf("enter the number ",n);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("entr %d value :- ",i,a[i]);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			even[j]=a[i];
			j++;
		}
		else{
			odd[k]=a[i];
			k++;
		}
	}
	printf("The even elemets are : -\n");
	printf("-------------\n");
	for(i=0;i<j;i++){
		printf("%d\n",even[i]);	
	}
	
	printf("The odd elemets are : -");
	printf("-------------");
	for(i=0;i<k;i++){
		printf("%d\n",odd[i]);	
	}
	
}

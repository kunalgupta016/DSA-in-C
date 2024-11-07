#include<stdio.h>

int main(){
	int i,j,ctr=0,n,a[100];
	printf("hownmany number you want to enter ",n);
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		printf("the %d value :-  ",i,a[i]);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++){
		for(j=i+1;j<=n-1;j++){
			if(a[i]==a[j]){
				ctr++;
				break;
			}
			}
	}
	printf("total number of duplicate numbers are :- %d \n",ctr);
}

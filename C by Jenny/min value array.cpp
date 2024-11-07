#include<stdio.h>
int main(){
	int i,a[10],min;
	
	for(i=0;i<=10;i++){
		printf("enter  %d value \n",i,a[i]);
		scanf("%d",&a[i]);
	}
	min=999;
	for(i=0;i<=10;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("The minimum value is %d",min);
}

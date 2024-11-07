#include<stdio.h>
int main(){
	int n,i,f=1;
	printf("enter a number :- ",n);
	scanf("%d",&n);
	if(n==0){
		printf("1");
	}else{
		for(i=1;i<=n;i++){
		f=f*i;
	}
	printf("%d",f);
	}
	
}

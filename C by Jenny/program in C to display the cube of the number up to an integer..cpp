#include<stdio.h>
// program in C to display the cube of the number up to an integer.
int main(){
	int i,n;
	printf("enter a natural number where you want find the cube : - ",n);
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		printf("%d \n",i*i*i);
	}
}

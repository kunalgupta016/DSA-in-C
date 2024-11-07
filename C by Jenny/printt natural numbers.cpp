#include<stdio.h>
int natural(int);
int main(){
	natural(50);
}
int natural(int a){
	if(a>0){
		printf("%d ",a);
	natural(a-1);	
	}
	
}

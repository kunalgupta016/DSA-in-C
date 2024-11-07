#include<stdio.h>
int main(){
	int a=2,b=3,c=4;
	if(a=b<c){
		c++;
		a--;
	}
	++b;
//	else{
//		c=20;
//	}
	printf("\n a= %d \t b=%d \t c=%d",a,b,c);
	
}

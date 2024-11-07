#include<stdio.h>
int main(){
	int a=2,b=3,c=4;
	if(c!=100){
		a=10;
	}
	else
		b=10;
	if(a+b>10)
		c=12;
		a=20;
		b=++c;
printf(" \na= %d \t b=%d \t c=%d \t \n",a,b,c);
return 0;
}

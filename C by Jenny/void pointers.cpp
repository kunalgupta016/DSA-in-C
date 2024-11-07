#include<stdio.h>
int main(){
	void *p;
	int a=3;
	char b='0';
	float c=4.9;
	p=&a;
	printf("%d\n",*(int*)p);
	p=&b;
	printf("%c\n",*(char*)p);
	p=&c;
	printf("%f\n",*(float*)p);
}


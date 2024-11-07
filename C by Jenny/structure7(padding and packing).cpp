#include<stdio.h>
#pragma pack(1)//used for off the padding 
typedef struct student{
	char a;
	char b;
	int c;
}stu;
int main(){
	stu s={'s','i',8};
	printf("%d",sizeof(s));
}


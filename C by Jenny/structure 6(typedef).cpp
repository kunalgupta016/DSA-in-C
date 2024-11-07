#include<stdio.h>
typedef struct student {
	int roll;
	float marks;
	char name[20];
}stu;
int main(){
	stu s={1,4.5,"kunal"};
	printf("%d\t%f\t%s",s.roll,s.marks,s.name);
}

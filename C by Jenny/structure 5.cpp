#include<stdio.h>
struct student{
	int roll_num;
	char name[20];
	float marks;
};
struct student s={
	1,"kunal",90.000000
};
int main(){
	struct student *ptr;
	ptr=&s;
	printf("\t%d\t%s\t%f",ptr->roll_num,ptr->name,ptr->marks);
}

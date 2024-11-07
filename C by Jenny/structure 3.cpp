#include<stdio.h>
struct students{
	int rollNo;
	char Name[20];
	float marks;
};
int main(){
	struct students s1={
		2,"kunal",99.91
	};
	struct students s2={
		1,"tushar",99.99
	};
	printf("Info for s1 :-\n");
	printf("------------------------------------------------------------------\n");
	printf("%d\n",s1.rollNo);
	printf("%s\n",s1.Name);
	printf("%.3f\n",s1.marks);
	printf(" \n");
	printf("Info for s2 :-\n");
	printf("------------------------------------------------------------------\n");
	printf("%d\n",s1.rollNo);
	printf("%s\n",s1.Name);
	printf("%.3f\n",s1.marks);
}


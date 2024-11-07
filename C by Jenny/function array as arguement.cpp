#include<stdio.h>
int avg(int [],int);
int main(){
	int marks[5]={10,20,30,15,45},size,average;
	size=sizeof(marks)/sizeof(marks[0]);
	average=avg(marks,size);
	printf("average=%d\n",average);
	
}
int avg(int marks1[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum=sum+marks1[i];
	}
	return sum/size;
}




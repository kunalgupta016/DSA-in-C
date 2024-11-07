#include<iostream>
using namespace std;
int main(){
	int i,max;
	int a[10]={1,2,3,23,2,1247,12,12,1,1234};
	max=a[1];
	for(i=0;i<10;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	cout<<"The maximum value is "<<max<<"\n";
}

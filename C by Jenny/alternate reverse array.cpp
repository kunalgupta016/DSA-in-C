#include<iostream>
using namespace std;
void swapAlter(int arr[],int size){
	
	for(int i=0;i<size;i+=2){
		if((i+1)<size){
			swap(arr[i],arr[i+1]);
		}
	}
	
}

void print(int arr[],int size){
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}cout<<"\n";
}


int main(){
	int arr[5]={1,2,3,4,5};
	int brr[6]={1,2,3,4,5,6};

	swapAlter(arr,5);
	swapAlter(brr,6);
	
	print(arr,5);
	print(brr,6);
	
	
}

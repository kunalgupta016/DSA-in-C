#include<iostream>
using namespace std;
int main(){
	
	int i,item,size;
	cout<<"write the size of array"<<"\n";
	cin>>size;
	int arr[size];
	cout<<"write all elements "<<"\n";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"write a element";
	cin>>item;
	for( i=0;i<size;i++){
		if(arr[i]==item){
			break;
		}
	}
	if(i==size){
		cout<<"not present";
	}
	else{
		cout<<"present";
	}
	
}
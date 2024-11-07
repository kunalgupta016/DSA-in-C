#include<iostream>
using namespace std;
void update(int arr[],int size){
	cout<<"Printing the array in update function"<<"\n";
	arr[0]=120;
	for(int i=0;i<3;i++){
		cout<<arr[i]<<" ";
	}cout<<"\n";
	cout<<"\n";
	cout<<"Going back into the main function"<<"\n";
	cout<<"\n";

}
int main(){
	int arr[3]={1,2,3};
	update(arr,3);
	cout<<"Printing the array in main function"<<"\n";
	
	for(int i=0;i<3;i++){
		cout<<arr[i]<<" ";
	}cout<<"\n";
}

#include<bits/stdc++.h>
using namespace std;

int main(){

	int size, temp;
	cin>>size;
	int arr[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}

	// roataing array
	for(int i=0; i<size-1; i++){
		temp = arr[i];
		arr[i] = arr[size-1];
		arr[size-1] = temp;
	}
	
	// printing roatated array
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}


}
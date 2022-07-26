#include<iostream>
using namespace std;

// function to arrange negative first
void negativeFirst(int arr[], int size){
	for(int i=0; i<size; i++){
		if(arr[i] < 0){
			for(int j=0; j<size; j++){
				if(arr[j] > 0){
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
					break;
				}
			}
		}
	}
}

int main(){
	int arr[] = {3, -1, -8, 5, 8, -3, 6};
	int size = sizeof(arr)/ sizeof(arr[0]);

	negativeFirst(arr, size);

	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}

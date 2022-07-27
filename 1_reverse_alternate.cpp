#include<iostream>
using namespace std;

void display(int arr[], int size){
      for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
}

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
        swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int odd[5] = {2,4,3,6,8};
    int even[6] = {5,2,6,7,1,4};

    swapAlternate(odd,5);
    display(odd,5);

    swapAlternate(even,6);
    display(even,6);

    return 0;
}
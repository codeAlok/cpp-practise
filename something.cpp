// find nth element in an array

#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(k == arr[i]){
            cout<<arr[i]<<endl;
        }
    }
}

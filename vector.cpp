#include<iostream>
#include<vector>
using namespace std;

// agian done some twicking
void display(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for(int i=0; i<size; i++){
        cout<<"Enter any element to add to this vector ";
        cin>>element;
        vec1.push_back(element);
    }
    // vec1.pop_back();
    display(vec1);
    
    display(vec1);
    return 0;
}
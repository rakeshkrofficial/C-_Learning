#include<iostream>
using namespace std;

void printArray(int arr[],int size){

    cout<<"Array elements are:"<<endl;
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int size;

    cout<<"Enter array size: ";
    cin>>size;

    int arr[size];

    cout<<"Enter element:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    printArray(arr,size);
    return 0;
}
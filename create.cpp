#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter number of element: ";
    cin>>n;

    int arr[n];

    for(int i = 0;i<n;i++){
        cout<<"Enter "<<i+1<<" element: ";
        cin>>arr[i];
    }
    cout<<"Elemnts are :"<<endl;
    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
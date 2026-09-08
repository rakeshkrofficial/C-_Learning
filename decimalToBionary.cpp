#include<iostream>
using namespace std;

int main(){
    long long num;

    cout<<"Enter a number : ";
    cin>>num;

    while(num > 0){
        long long bit = num % 2;
        cout<<bit <<" ";

        num = num/2;
    }

    return 0;
}
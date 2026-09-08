#include<iostream>
#include<cmath>

using namespace std;

int main() {

    long long num ;
    long long binary_no = 0;
    long long i = 0;

    cout<<"Enter a numbeer:";
    cin>>num;

    while(num > 0){
        long long bit = num % 2;
        binary_no = bit*pow(10 ,i++) + binary_no;
    
        num /= 2;
    }
    cout<< binary_no;
    return 0;
}
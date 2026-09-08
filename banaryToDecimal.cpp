#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int bits ;
    int num = 0 ;
    int i = 0;

    cout<<"Enter Binary number: ";
    cin>>bits;

    while(bits > 0){
        num = (bits % 10) * pow(2,i++) + num;
        bits /= 10;

    }

    cout<<num;
    return 0;

}
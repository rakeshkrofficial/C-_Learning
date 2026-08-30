#include<iostream>

using namespace std;

int main(){
    int currVal=0,val;

    if(cin >> currVal){
        int count=1;

        while(cin >> val){
            if(currVal == val){
                count += 1;
            }
            else{
                count=1;
                val=currVal;
            }
            
        }

        cout << currVal <<"=" << count;
    }
    
}
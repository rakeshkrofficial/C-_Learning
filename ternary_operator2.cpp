#include<iostream>
using namespace std;

int main(){
   
    int marks;

    cout<<"Enter your marks: ";
    cin>>marks;
    
    char result =(marks >= 90) ? 'A':
            (marks >= 80) ? 'B':
            (marks >= 70) ? 'C':
            (marks >= 60) ? 'D': 'F';
            

    cout<<"Your Grade is : "<<result;
}
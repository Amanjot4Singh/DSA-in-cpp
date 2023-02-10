#include<bits/stdc++.h>//Code to check wheather if the number is prime or not
using namespace std;
int main(){
    int a,i=2;
    bool p=true;
    cout<<" Enter the integer to check for prime number :";
    cin>>a;
    while(i<a){
        if(a%i==0){
            p=false;
            break;
        }
        i=i+1;
    }
    if(p){
        cout<<" "<<a<<" is a prime number"<<endl;
    }
    else{
        cout<<" "<<a<<" is not a prime number"<<endl;
    }
}
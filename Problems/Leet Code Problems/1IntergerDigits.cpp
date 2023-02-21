// Given an integer number n, return the difference between the product of its digits and the sum of its digits.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=1234,s=0,p=1;
    cout<<" Enter an integer: ";
    // cin>>n;
    while(n!=0){
        int a=n%10;
        p*=a;//this operator means p=p*a
        s+=a;//this operator means s=s+a
        n=n/10;
    }
    cout<<" Difference b/w product & sum of digits: "<<p-s<<endl;
}
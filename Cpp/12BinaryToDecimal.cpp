#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=0,a=0;
    cout<<" Enter binary number: ";
    cin>>n;
    while(n!=0){
        a=a+pow(2,i)*(n%10);//this only goes up if bit is 1 otherwise bit is 0 so it multiplies to 0 so it doesn't add only, therefore skipping the if else statement
        i++;
        n=n/10;
    }
    cout<<" Decimal Form : "<<a;
}
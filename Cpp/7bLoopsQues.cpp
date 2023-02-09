#include<bits/stdc++.h>//find sum of all even numbers
using namespace std;

int main(){
    int n,s=0,i=1,a;
    cout<<" Enter an integer: ";
    cin>>n;
    while(i<=n*2){
        if(i%2!=1){
            a=s+i;
            s=i;
        }
        i=i+1;
    }
    cout<<" Sum of "<<n<<" even integers is : "<<a<<endl;
}
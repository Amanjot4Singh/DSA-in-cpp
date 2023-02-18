#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=0,n,b=1,c;
    cout<<" Enter number of values : ";
    cin>>n;//fibonacci Series is the value bein equla to the sum of last two terms
    cout<<" Fibonacci Series: "<<a<<", "<<b;
    for(int i=1;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<", "<<c;
    }
}
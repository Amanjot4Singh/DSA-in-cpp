#include<bits/stdc++.h>
using namespace std;

int main(){
     int n,i=1;
     cout<<" How many number to print: ";
     cin>>n;
     while(i<=n){//this block of code runs until the statment is true
        cout<<" "<<i;
        i=i+1;//this increses i for the statement to be eventually go false to stop the loop, other wise the loop runs infinitely
     }
}
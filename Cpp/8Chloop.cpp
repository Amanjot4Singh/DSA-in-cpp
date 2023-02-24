#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=65;//this logic works on ASCII values
    cout<<char(a+1)<<endl;
    char b='A';
    cout<<char(b+1)<<endl;
    cout<<char(b-1)<<endl;
    cout<<b+1<<endl;//prints b's ascii value +1
    int i=0;
    while(i<=25){
        if(i<10) cout<<" "<<char('A'+i)<<" ";
        else cout<<"  "<<char('A'+i)<<" ";
        i=i+1;
    }
    cout<<"\n";
    i=1;
    while(i<=26){
        cout<<" "<<i<<" ";
        i=i+1;
    }
}
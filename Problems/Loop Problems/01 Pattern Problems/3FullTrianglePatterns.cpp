#include<bits/stdc++.h>
using namespace std;

int main(){
    int r;
    cout<<" Enter the number of rows: ";
    cin>>r;
    cout<<" Star Triangle Pattern"<<endl;
    int i=1;
    while(i<=r){
        int j=1;
        while(j<=2*r){
            if(j<=r-i) cout<<"   ";
            else if(j>=r-i&&j<r+i) cout<<" + ";
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<" Triangle Number Pattern"<<endl;
    while(i<=r){
        int j=1;
        while(j<=2*r){
            if(j<=r-i) cout<<"   ";
            else if(j>=r-i&&j<=r) cout<<" "<<j-r+i<<" ";
            else if(j>r&&j<r+i) cout<<" "<<i-j+r<<" ";
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<" Triangle Alphabet Pattern"<<endl;
    while(i<=r){
        int j=1;
        while(j<=2*r){
            if(j<=r-i) cout<<"   ";
            else if(j>=r-i&&j<=r) cout<<" "<<char('A'+j-r+i-1)<<" ";
            else if(j>r&&j<r+i) cout<<" "<<char('A'+i-j+r-1)<<" ";
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<" Triangle Number and Star Pattern"<<endl;
    while(i<=r){
        int j=1;
        while(j<=2*r){
            if(j<=r-i+1) cout<<" "<<j<<" ";
            else if(j>=r-i&&j<r+i) cout<<" + ";
            else cout<<" "<<2*r-j+1<<" ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
}
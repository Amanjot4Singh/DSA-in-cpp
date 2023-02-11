#include<bits/stdc++.h>
using namespace std;

int main(){
    int c,r,i=1;
    cout<<" Enter the no of columns: ";
    cin>>c;
    cout<<" & rows: ";
    cin>>r;
    cout<<" Star Matrix Pattern"<<endl;
    while(i<=c){
        int j=1;
        while(j<=r){
            cout<<" + ";
            j=j+1;
        }
        cout<<"\n";
    i=i+1;
    }
    i=1;
    cout<<" Number Row Matrix Pattern"<<endl;
    while(i<=c){
        int j=1;
        while(j<=r){
            cout<<" "<<i<<" ";
            j=j+1;
        }
        cout<<"\n";
    i=i+1;
    }
    i=1;
    cout<<" Reverse Number Row Matrix Pattern"<<endl;
    while(i<=c){
        int j=1;
        while(j<=r){
            cout<<" "<<c-i+1<<" ";
            j=j+1;
        }
        cout<<"\n";
    i=i+1;
    }
    i=1;
    cout<<" Number Column Matrix Pattern"<<endl;
    while(i<=c){
        int j=1;
        while(j<=r){
            cout<<" "<<j<<" ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<" Number Column Matrix Pattern"<<endl;
    while(i<=c){
        int j=1;
        while(j<=r){
            cout<<" "<<r-j+1<<" ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<" Counting Number Matrix Pattern"<<endl;
    int a=1;
    while(i<=r){
        int j=1;
        while(j<=c){
            cout<<" "<<a<<" ";
            a=a+1;
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    a=1;
    cout<<" Continuous Aphabet Matrix Pattern"<<endl;
    while(i<=c){
        int j=1;
        while(j<=r){
            cout<<" "<<char('A'+a-1)<<" ";
            a=a+1;
            j=j+1;
        }
        cout<<'\n';
        i=i+1;
    }
    i=1;
    cout<<" Row Aphabet Matrix Pattern"<<endl;
    while(i<=c){
        int j=1;
        while(j<=r){
            cout<<" "<<char('A'+j-1)<<" ";
            j=j+1;
        }
        cout<<'\n';
        i=i+1;
    }
    i=1;
    cout<<" Reverse Row Aphabet Matrix Pattern"<<endl;
    while(i<=c){
        int j=1;
        while(j<=r){
            cout<<" "<<char('A'+r-j)<<" ";
            j=j+1;
        }
        cout<<'\n';
        i=i+1;
    }
}
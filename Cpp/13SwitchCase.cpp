#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    for(bool a=true;a!=false;){
        cout<<" Choose your death, 1, 2 or anything else then press enter \n Choice:  ";
        cin>>n;
        if (n==4) {
            cout<<" You aren't allowed that option"<<endl;
            continue;
        }
        switch(n) {// it is just like if else but in a different form
            case 1: cout<<" Died in sleep"<<endl;
                break;// if this break isn't given then all the underlying code is executed
            case 2: cout<<" Car accident"<<endl;
                break;
            case 3: cout<<" You aren't dead"<<endl;
                a=false;// one way to exit from a loop.
                break;
            case 4: cout<<" this should never get executed"<<endl;
            default: cout<<" Undefined, nobody knows how you died"<<endl;
        }
    }
    // it can also be used with ch data type, just use statement as case 'something'
}
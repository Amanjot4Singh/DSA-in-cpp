#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    bool a=true;
    cout<<" Enter the number: ";
    cin>>n;
    for(i=2;i<=n-1;i++){
        if(n%i==0) {
            a=false;
            break;
        }
        else a=true;
    }
    if(a==true) cout<<" "<<n<<" is a prime number"<<endl;
    else cout<<" "<<n<<" is divisible by "<<i<<" so it is not a prime number"<<endl;
}
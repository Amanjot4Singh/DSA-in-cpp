#include<bits/stdc++.h>//code to print fahrenheit to celsius
using namespace std;

int main(){
    double F=1,C;
    while(F<=100){
    cout<<" "<<F<<" degree fahrenheit corresponds: "<<C<<" degree in celsius"<<endl;
    C=((F-32.0)*5)/9;
    F=F+1;
    }
}
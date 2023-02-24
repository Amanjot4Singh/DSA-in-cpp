// Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).
#include<bits/stdc++.h>
using namespace std;
int hammingWeight(uint32_t n) {
        int c=0;
        while(n!=0){
            if(n&1){
            c++;
            }
            n=n>>1;
        }
        return c;
    }
int main(){
    uint32_t t=11;//uin32_t is a data variable which,in our case stores the bit value of 11
    cout<<hammingWeight(11);
}

    
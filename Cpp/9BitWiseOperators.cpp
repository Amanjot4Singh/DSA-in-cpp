#include<bits/stdc++.h>
using namespace std;

int main(){
    //"&" AND operator:-  0 & 0 then 0, 0 & 1 then 0, 1 & 0 then 0, 1 & 1 then 1 -> if there is any 0 in input then output is always 0
    //"|" OR operator :-  0 | 0 then 0, 0 | 1 then 1, 1 | 0 then 1, 1 | 1 then 1 -> if there is any 1 in input then output is always 1
    //"~" NOT operator:- invertes all bits, 0~ is 1 and 1~ is 0
    //"^" XOR operator:- 0 ^ 0 then 0, 0 ^ 1 then 1, 1 ^ 0 then 1, 1 ^ 1 then -> if inputs are same then output is always 0
    int a=2;
    cout<<~a<<endl;//2's bits are 0010 then its ~ is 1101 and printing it takes its two's complement which is 0011 and because ~ of 0010 is 1111 1101 the value becomes negative, there fore -3 is printed
    int i=0;
    while(i<=10){
        cout<<"~"<<i<<" = "<<~i<<endl;
        i=i+1;
    }
    int b=3,c=5;
    cout<<"\nAND operation: b&c = 3&5:-\n0011\n0101\n----\n0001 = "<<(b&c)<<endl;
    cout<<"\n OR operation: b|c = 3|5:-\n0011\n0101\n----\n0111 = "<<(b|c)<<endl;
    cout<<"\nXOR operation: b^c = 3^5:-\n0011\n0101\n----\n0110 = "<<(b^c)<<endl;

    //Left and Right Shift Operator
    int d=5<<2;
    cout<<"Left Shift Operator 5>>2 is shifting 101 two times in 0000 0101 ie to 0001 0100 which is "<<d<<endl;
    cout<<"Right Shift Operator 20>>2 is shifting 101 two times in 0001 0100 ie to 0000 0100 which is "<<(d>>2)<<endl;
    /*the extra zero appearing on the right side in the case for left shift operator is known as padding, in 
    in the case of +ve number the padding is always taken 0, but in the case of -ve it depends on the compiler*/
    cout<<"Left Shifting of -ve number -5<<2 "<<(-5<<2)<<endl;
    /*in left shifting 5<<2 we can say it also perfroms 5*(2*2) and in right shifting 20>>2 : 20/(2*2)
    similarly, if we see 3<<3 : 3*(2*2*2) that will be 24*/
    cout<<"3<<3 or 3*(2^3) : "<<(3<<3)<<endl;

    //Increment and Decrement Operator
    int j=0;
    int l=j++;//use first then increases and stores. Post Increment
    cout<<"if we set l=j++ where j was 0 then afterwards l="<<l<<" and j="<<j<<endl;
    int m=++j;//first increments and strores then uses. Pre Increment
    cout<<"if we set k=++j where j was 1 then afterwards m="<<m<<" and j="<<j<<endl;
    //exactly similar is the case for decrement
    int x=j--;
    cout<<"if we set x=j-- where j was 2 then afterwards x="<<x<<" and j="<<j<<endl;
    int y=--j;
    cout<<"if we set y=--j where j was 1 then afterwards y="<<y<<" and j="<<j<<endl;
    int k=0;
    cout<<k<<" "<<k++<<endl;//this statement should print 0 first and then 1, but in cpp the approach is bottoms up so, it first prints 1 and then 0 but increments it
}   
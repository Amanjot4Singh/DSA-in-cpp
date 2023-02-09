#include<bits/stdc++.h>//code to print wheather a>b or a<b
using namespace std;
int main(){
    int a,b,c;
    cout<<" Enter two values:-"<<endl;
    cin>>a>>b;
    cout<<" Value of a : "<<a<<" and b :"<<b<<endl;
    
    c=cin.get();/*When you presses the Enter key after inputting the values,'\n' is stored in input buffer.
    So,cin.get() retrieves the character in input buffer, which is '\n','\n's ASCII value is 10*/
    cout<<" Value of c: "<<c<<endl;

    if(a>b){
        cout<<" a is greater than b"<<endl;
    }
    else if(a==b){
        cout<<" a and b are equal"<<endl;
    }
    else{
        cout<<" b is greater than a"<<endl;
    }
}
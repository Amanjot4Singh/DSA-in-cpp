#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=0      ; i<=n      ; i++){
    //initialization ; condition ; updation
        cout<<" i : "<<i<<" n : "<<n<<endl;
    }
    //for loop can work without any initialization updation or condition
    /*for(;;){
        cout<<"a";
    }as this for loop has no condition it never knows when to stop and keeps on going till infinity*/
    for(int a=0,b=1;a<=8&&b<=9;a++,b++){//multiple initialization, updation and multiplke conditions can also be used
        if(a>=6|b>=6) {
            cout<<" Break command stops the loop"<<endl;
            break;//break command just stops/breaks the loop where it is as it is.
            cout<<" This won't get printed out as break would stop the loop before this"<<endl;
        }
        else cout<<" a : "<<a<<" b : "<<b<<endl;
    }
    for(int c=0,d=1;c<=8&&d<=9;c++,d++){
        if(c==6|d==6) {
            cout<<" Continue command skips the loop"<<endl;
            continue;//continue command skips the iteration it is in and lets the wrest of the loop run skipping the particular iteration
            cout<<" This also won't get printed out as continue would skip this iteration before this"<<endl;
        }
        else cout<<" c : "<<c<<" d : "<<d<<endl;
    }
    /*In the above for loop's blocks of code the variables a,b,c,d and i cannot be used again out of the blocks they cant be acces nothing
    cout<<a<<b<<c<<d<<i;Thic would give an error saying a,b,c,d or i havn't been described if you descirbe them
    int a,b,c,d,i;//it would give an error saying redifinition of variables
    But u can make user og there variablew in anothe blocks of code*/
    for(int i=1;i<2;i++){
        cout<<" This works as i is used in a separate block of code : "<<i<<endl;
        for(int i=1;i<2;i++){
            cout<<i<<endl;
        }
    }
}
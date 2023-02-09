#include<bits/stdc++.h>
using namespace std;

int main(){
    char a;
    cout<<" Input a character :";
    cin>>a;
    if(a>='a'&&a<='z'){
        cout<<" "<<a<<" is a lower case letter"<<endl;
    }
    else if(a>='A'&&a<='Z'){
        cout<<" "<<a<<" is an upper case letter"<<endl;
    }
    else if(a>='0'&&a<='9'){
        cout<<" "<<a<<" is a numeric value b/w 0 to 9"<<endl;
    }
}
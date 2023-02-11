#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,i=1;
    cout<<" Enter the number of Rows & Columns: ";
    cin>>r;
    cout<<"Bottom Left Triangle pattern"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(j<=i) cout<<" + ";
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"with numbers"<<endl;
    int a=1;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(j<=i){
                cout<<" "<<a<<" ";
                a=a+1;
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"rows counting"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(j<=i){
                cout<<" "<<j<<" ";
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"reverse row counting"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(j<=i){
                cout<<" "<<i-j+1<<" ";
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"with alphabets"<<endl;
    a=0;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(j<=i){
                cout<<" "<<char('A'+a)<<" ";
                a=a+1;
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"rows alphabets"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(j<=i){
                cout<<" "<<char('A'+j-1)<<" ";
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"reverse rows alphabets"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(j<=i){
                cout<<" "<<char('A'+i-j)<<" ";
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"reverse*2 rows alphabets"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(j<=i){
                cout<<" "<<char('A'+r-i+j-1)<<" ";
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"Upper Right Triangle pattern"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(j>=i) cout<<" + ";
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"with numbers"<<endl;
    a=1;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(j>=i){
                cout<<" "<<a<<" ";
                a=a+1;
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"rows counting"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(j>=i){
                cout<<" "<<j-i+1<<" ";
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"reverse rows counting"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(j>=i){
                cout<<" "<<r-j+1<<" ";
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"with alphabets"<<endl;
    a=0;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(j>=i){
                cout<<" "<<char('A'+a)<<" ";
                a=a+1;
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"rows alphabets"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(j>=i){
                cout<<" "<<char('A'+j-i)<<" ";
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"reverse rows alphabets"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(j>=i){
                cout<<" "<<char('A'+r-j)<<" ";
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"Bottom Right Triangle Pattern"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(i>=r-j+1) cout<<" + ";
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1,a=1;
    cout<<"with numbers counting"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(i>=r-j+1){ 
                cout<<" "<<a<<" ";//just put "char('A'+a-1)" instead of a for alphabetic pattern
                a=a+1; 
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"rows counting"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(i>=r-j+1){ 
                cout<<" "<<r-j+1<<" ";//just put "char('A'+r-j)" instead for alphabetic pattern
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"reverse rows counting"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(i>=r-j+1){ 
                cout<<" "<<j-r+i<<" ";
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"Upper Left Triangle Pattern"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(i<=r-j+1) cout<<" + ";
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1,a=1;
    cout<<"with numbers counting"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(i<=r-j+1){
                cout<<" "<<a<<" ";
                a=a+1;
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"rows counting"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(i<=r-j+1){
                cout<<" "<<j<<" ";
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    i=1;
    cout<<"reverse rows counting"<<endl;
    while(i<=r){
        int j=1;
        while(j<=r){
            if(i<=r-j+1){
                cout<<" "<<r-j+1<<" ";
            }
            else cout<<"   ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
}
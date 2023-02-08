#include<iostream>
using namespace std;

int main(){
	int a=2/5;
	cout<<a<<endl;//this gives op as 0 because 2/5 is 0.4 so it only store 0 in a
	
	//float b=2/5;//this does the same. give op as 0, whereas 
	float b=2.0/5;
	cout<<b<<endl;
	//similar for double
}

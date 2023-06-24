#include<iostream>
using namespace std;
int compare(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	int a,b,com;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	com=compare(a,b);
	cout<<"Largest = "<<com;
}

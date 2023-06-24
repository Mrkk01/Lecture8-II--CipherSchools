#include<iostream>
using namespace std;
int sum(int a,int b){
	int c=a+b;
	return c;
}
int main(){
	int a,b;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	int sum_total=sum(a,b);
	cout<<"sum = "<<sum_total;
	return 0;
}


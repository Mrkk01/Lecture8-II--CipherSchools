#include<iostream>
using namespace std;
int sum(int,int);


int main(){
	int a,b;
	cin>>a>>b;
    int sum_1=sum(a,b);
    cout<<sum_1;
}

int sum(int a,int b){
	return a+b;
}




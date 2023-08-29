#include<iostream>
using namespace std;

int main(){
	/*
	0 1 1 2 3 5 8 13 21
	*/ 
	 int a=0,b=1,n;
	 cin>>n;
	 cout<<a<<" "<<b<<" ";
	 for (int i = 1; i < n; ++i)
	 {
	 	int nextNumber=a+b;
	 	cout<<nextNumber<<" ";
	 	a=b;
	 	b=nextNumber;
	 }
}
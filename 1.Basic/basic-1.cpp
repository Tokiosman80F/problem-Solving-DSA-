#include<iostream>
using namespace std;

int main(){
	// bool bl=true;
	// cout<<bl<<endl;
	
	// int a=2;
	// float b=2.1;
	// double c=2.111;
	// char user='t';
	// // ---size of data type---
	// int sizeA=sizeof(a);
	// int sizeB=sizeof(b);
	// int sizeC=sizeof(c);
	// int sizeD=sizeof(user);

	// cout<<"intreger =>"<<a<<"Size =="<<sizeA<<endl;
	// cout<<"float =>"<<b<<"Size =="<<sizeB<<endl;
	// cout<<"double =>"<<c<<"Size =="<<sizeC<<endl;
	// cout<<"char =>"<<user<<"Size =="<<sizeD<<endl;	
	// // ----------------------

	// int f='a';
	// cout<<"f is s ==> "<<f<<endl;

	// // char ch=123456;
	// char ch=36;
	// cout<<ch<<endl;

	// // ---unsigned int---
	// cout<<"---UNSIGN INT--"<<endl;

	// unsigned int postive=12;
	// cout<<postive<<endl;
	
	// cout<<"---cin.get()--"<<endl;

	// int x;
	// x=cin.get();
	// cout<<"the value of x is ==>"<<x<<endl;


	// int a=2;
	// int b=a+1;
	// if((a==3)==b){
	// 	cout<<"first ==>"<<a;
	// }
	// else{
	// 	cout<<"second ==>"<<a+1;
	// }

	// int a =24;
	// if(a>20){cout<<"love";}
	// else if(a==20){cout<<"lovely";}
	// else{
	// 	cout<<"Babar";
	// }
	// cout<<a;

	// ==== HOME WORK ====	
	
	// char ch;
	// cin>>ch;
	// if(ch>64 && ch<91){
	// 	cout<<"Upper case";
	// }
	// else if(ch>=97 && ch<=122){
	// 	cout<<"Lower case";
	// }
	// else if(ch>=48 && ch<=57)
	// {
	// 	cout<<"number";
	// }

	// int n;
	// cin>>n;
	// int i=1;
	// int sum=0;
	// while(i<=n){
	// 	sum=sum+i;
	// 	if(i%2==0)
	// 	{cout<<sum<<" ";}
	// 	i++;

	// }

	// ===== PRIME NUMBER =====

	// int n;
	// cin>>n;
	// int number=2;
	// while(number<n){
	// 	if(n%number==0)
	// 	{
	// 		cout<<"NOT  PRIME";
	// 	}
	// 	number++;	
	// }
	// cout<<"PRIME";

	// ===== PRINTING STARS =====

	/*
	
	* * * *
	* * * *
	* * * *
	* * * *
	
	*/
	// int input,row=1;
	// cin>>input;
	// while(row<=input)
	// {	
	// 	int col=1;
	// 	while(col<=input)
	// 	{
	// 		cout<<row<<" ";
	// 		col++;
	// 	}
		
	// 	cout<<endl;
	// 	row++;
	// }

	// ---QUESTION---
	// ---1---
	
	// int a,b=1;
	// a=10;
	// if(++a)
	// 	cout<<"this=>"<<b;
	// else cout<<++b;
	
	// ---2---
	// 	int a=1,b=2;
	// 	if(a-->0 && ++b>2)
	// 		cout<<"state1";
	// 	else cout<<"state-2";
	// 	cout<<endl;
	// 	cout<<a<<"-"<<b;
	// 	cout<<endl;
	// // ---3---
	// 	int number=3;
	// 	cout<<(25*(++number))<<endl;
	// ---4---
		int a=1,b=a++,c=++a;
		cout<<b<<endl;
		cout<<c;
	// ---5---


}
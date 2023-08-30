#include<iostream>
using namespace std;

int main(){
	/*
	0 1 1 2 3 5 8 13 21
	*/ 
	 // int a=0,b=1,n;
	 // cin>>n;
	 // cout<<a<<" "<<b<<" ";
	 // for (int i = 1; i < n; ++i)
	 // {
	 // 	int nextNumber=a+b;
	 // 	cout<<nextNumber<<" ";
	 // 	a=b;
	 // 	b=nextNumber;
	 // }

	// PRIME NUMBER
	// int n;
	// cin>>n;
	// for (int i = 2; i < n; ++i)
	// {
	// 	/* code */
	// 	if(n%i==0)
	// 	{
	// 		cout<<"Not Prime Number"<<endl;
	// 		break;

	// 	}
	// 	else{
	// 		cout<<" Prime"<<endl;
	// break;}

	// }
	// for (int i = 1; i <5; i--)
	// {
	// 	cout<<i<<" ";
	// 	i++;
	// 	/* code */
	// }

	for (int i = 0; i < 15;i+=2)
	{
		/* code */
		cout<<i<<" ";
		if (i&1)
		{
			/* code */
			continue;
		}
		i++;
	}
}
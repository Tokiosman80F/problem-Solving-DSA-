#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n,ans=0,i=0;
	cin>>n;
	while(n!=0)
	{
		// convert into Bits
		int bit=n&1;
		cout<<"bit =>"<<bit<<endl;
		// checking the next bit
		n=n>>1;
		cout<<"n=> "<<n<<endl;
		// adding up all bits
		ans=(bit*pow(10,i))+ans;
		i++;
	}
	cout<<"Answer"<<ans;
}
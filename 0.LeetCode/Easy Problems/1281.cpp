#include<iostream>
using namespace std;
int main(){
	// int n,singleDigit,reminder,total=1,sum=0;
	// cout<<n%10<<endl;
	// cout<<n/10<<endl;
	// while(n!=0)
	// {	
	// 	singleDigit=n%10;
	// 	n=n/10;
	// 	total=total*singleDigit;
	// 	cout<<"single digit :"<<singleDigit<<endl;
	// 	cout<<"reminder :"<<n<<endl;
	// 	cout<<"total :"<<total<<endl;
	// 	sum=sum+singleDigit;
	// 	cout<<"sum "<<sum<<endl;


	// }
	// 	cout<<"final total :"<<total;
	// 	cout<<"final sum : "<<sum;
	 int product=1,sum=0,singleDigit,result,n;
	 cin>>n;

		while(n!=0)
        {
            singleDigit=n%10;
            product=product*singleDigit;
            sum=sum+singleDigit;
            n=n/10;

        }
         result=product - sum;
          cout<<"result : "<<result;
}
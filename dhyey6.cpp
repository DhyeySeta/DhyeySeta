#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	
	cout<<"Enter The Number ::";
	cin>>n;
	 
	 for(i=0;i<=n;i++)
	 {
	 	for(j=1;j<=i;j++)
	 	{
	 		cout<<"*";
		}
		cout<<"\n";
	 }
	 return 0;
}

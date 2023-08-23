#include<iostream>
using namespace std;
int main()
{
	int j[3];
	for(int i=0;i<3;i++)
	{
		cout<<"Enter the array ::";cin>>j[i];

	}
	for(int i=0;i<3;i++)
	{
		if(j[i]<0)
		cout<<"Jay Shree Ram ::"<<j[i];
	}
	return 0;
}

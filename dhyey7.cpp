#include<iostream>
using namespace std;
class temp
{
	private:
	float feh,cel;
	public:
	float conversion(float f)
	{
		feh=f;
		cel=(feh-32)*5.0/9.0;
		return cel;
	};
	int main()
	
	cout<<"Enter the Fahrenheit ::";
	cin>>fer;
	cel=5/9*fer-32; 
	cout<<"Fahrenheit into Celsius is ::"<<cel<<endl;
	return 0;
	
}

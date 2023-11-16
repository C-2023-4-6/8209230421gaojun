#include<iostream>
#include<math.h>
using namespace std;
int main()

{
	float a;
	cout << "ÇëÊäÈëa" << endl;
	cin >> a;
	float x = a;
	float x0 = (x + a / x) / 2;
	
	
	while (fabs(x - x0) > 1e-5)
	{

		x = (x + a / x) / 2;
		x0 = (x0 + a / x0) / 2;


	}

	cout<<x<<endl;
	cout << x0 << endl;










}
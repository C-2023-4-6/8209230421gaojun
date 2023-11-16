#include<iostream>
using namespace std;
int main()
{
	
	char t;
	
	cout << "ÇëÊäÈë×ÖÄ¸£º" << endl;
	cin >> t;
	if (t <= 122&&t>97)
	{
		cout << char(t - 32) << endl;

	}

	else
	{
		
		cout << (int)t << endl;


	}

	



}
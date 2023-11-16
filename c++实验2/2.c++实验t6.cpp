#include<iostream>
using namespace std;
int main()

{

	int a;
	int b;
	cin >> a;
	cin >> b;

	/*for (int i = 2; 1; i++)*/
	int i = 100000;
	while (1)
	{
		if (a % i == 0 && b % i == 0)
		{
			cout << "最大公因式为：" << i << endl;
			break;
		}
		i--;


	}
	int t = 1;
	while (1)


	{


		if (t % a == 0 && t % b == 0)
		{

			cout << "最小公倍数为：" << t << endl;
			break;
		}
		t++;
	}
	system("pause");
	return 0;
}
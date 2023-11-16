#include<iostream>
using namespace std;
int main()
{
	float l1;
	float l2;
	float l3;
	cout << "请输入l1的长度：" << endl;
	cin >> l1;
	cout << "请输入l2的长度：" << endl;
	cin >> l2;
	cout << "请输入l3的长度：" << endl;
	cin >> l3;
	if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1)
	{

		cout << "这三边能构成三角形" << endl;
		if (l1 == l2 && l1 == l3 && l2 == l3)
		{


			cout << "且该三角形为等腰三角形" << endl;
		}

		else
		{

			cout << "但是该三角形不为等腰三角形" << endl;
		}



	}
	else
	{


		cout << "这三边无法构成三角形" << endl;
	}




	system("pause");
	return 0;








}
#include<iostream>
using namespace std;
int main()
{while(1)
{
	cout << "请选择你要进行的运算：" << endl;
	cout << "1.加法" << endl;
	cout << "2.减法" << endl;
	cout << "3.乘法" << endl;
	cout << "4.除法" << endl;
	cout << "5.取余" << endl;
	int a;
	cin >> a;
	if (a == 1)
	{
		int t1;
		int t2;
		cout << "请输入第一个数：" << endl;
		cin >> t1;
		cout << "请输入第二个加数：" << endl;
		cin >> t2;
		cout << t1 + t2 << endl;
		/*break;*/


	}
	else if (a == 2)
	{
		int t1;
		int t2;
		cout << "请输入被减数：" << endl;
		cin >> t1;
		cout << "请输入减数：" << endl;
		cin >> t2;
		cout << t1 - t2 << endl;
		/*break;*/

	}

	else if (a == 3)
	{


		int t1;
		int t2;
		cout << "请输入第一个数：" << endl;
		cin >> t1;
		cout << "请输入要乘的数：" << endl;
		cin >> t2;
		cout << (t1) * (t2) << endl;
		/*break;*/

	}

	else if (a == 4)
	{

		int t1;
		int t2;
		cout << "请输入被除数：" << endl;
		cin >> t1;
		cout << "请输入除数：" << endl;
		cin >> t2;
		cout << (t1) / (t2) << endl;
	/*	break;*/

	}
	else if (a == 5)
	{


		int t1;
		int t2;
		cout << "请输入第一个数：" << endl;
		cin >> t1;
		cout << "请输入第二个数：" << endl;
		cin >> t2;
		cout << (t1) % (t2) << endl;
	/*	break;*/

	}

	else
	{

		cout << "选择无效,请重新选择" << endl;

	}

	system("pause");
		system("cls");
	
}
	
system("pause");
return 0;


}
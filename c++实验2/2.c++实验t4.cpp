#include<iostream>
using namespace std;
int main()
{while(1)
{
	cout << "��ѡ����Ҫ���е����㣺" << endl;
	cout << "1.�ӷ�" << endl;
	cout << "2.����" << endl;
	cout << "3.�˷�" << endl;
	cout << "4.����" << endl;
	cout << "5.ȡ��" << endl;
	int a;
	cin >> a;
	if (a == 1)
	{
		int t1;
		int t2;
		cout << "�������һ������" << endl;
		cin >> t1;
		cout << "������ڶ���������" << endl;
		cin >> t2;
		cout << t1 + t2 << endl;
		/*break;*/


	}
	else if (a == 2)
	{
		int t1;
		int t2;
		cout << "�����뱻������" << endl;
		cin >> t1;
		cout << "�����������" << endl;
		cin >> t2;
		cout << t1 - t2 << endl;
		/*break;*/

	}

	else if (a == 3)
	{


		int t1;
		int t2;
		cout << "�������һ������" << endl;
		cin >> t1;
		cout << "������Ҫ�˵�����" << endl;
		cin >> t2;
		cout << (t1) * (t2) << endl;
		/*break;*/

	}

	else if (a == 4)
	{

		int t1;
		int t2;
		cout << "�����뱻������" << endl;
		cin >> t1;
		cout << "�����������" << endl;
		cin >> t2;
		cout << (t1) / (t2) << endl;
	/*	break;*/

	}
	else if (a == 5)
	{


		int t1;
		int t2;
		cout << "�������һ������" << endl;
		cin >> t1;
		cout << "������ڶ�������" << endl;
		cin >> t2;
		cout << (t1) % (t2) << endl;
	/*	break;*/

	}

	else
	{

		cout << "ѡ����Ч,������ѡ��" << endl;

	}

	system("pause");
		system("cls");
	
}
	
system("pause");
return 0;


}
#include<iostream>
using namespace std;
int main()
{
	float l1;
	float l2;
	float l3;
	cout << "������l1�ĳ��ȣ�" << endl;
	cin >> l1;
	cout << "������l2�ĳ��ȣ�" << endl;
	cin >> l2;
	cout << "������l3�ĳ��ȣ�" << endl;
	cin >> l3;
	if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1)
	{

		cout << "�������ܹ���������" << endl;
		if (l1 == l2 && l1 == l3 && l2 == l3)
		{


			cout << "�Ҹ�������Ϊ����������" << endl;
		}

		else
		{

			cout << "���Ǹ������β�Ϊ����������" << endl;
		}



	}
	else
	{


		cout << "�������޷�����������" << endl;
	}




	system("pause");
	return 0;








}
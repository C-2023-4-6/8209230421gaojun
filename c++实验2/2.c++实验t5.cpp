#include<iostream>
using namespace std;
int main()

{

	char ch/* = getchar()*/;
	cout << "������һ���ַ�" << endl;
	/*cin >> ch;*/
	int letter = 0, space = 0, number = 0, els = 0;
	while ((ch=getchar())&&(ch != '\n'))
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{
			letter++;
		}

		else if (ch >= '0' && ch <= '9')
		{
			number++;

		}
		else if (ch == ' ')
		{
			space++;
		}

		else
		{
			els++;
		}
	}


	cout << "��ĸ����Ϊ��" << letter << endl;
	cout << "���ָ���Ϊ��" << number << endl;
	cout << "�ո����Ϊ��" << space << endl;
	cout << "�����ַ�����Ϊ��" << els << endl;

	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
int main()

{

	char ch/* = getchar()*/;
	cout << "请输入一串字符" << endl;
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


	cout << "字母个数为：" << letter << endl;
	cout << "数字个数为：" << number << endl;
	cout << "空格个数为：" << space << endl;
	cout << "其他字符个数为：" << els << endl;

	system("pause");
	return 0;
}
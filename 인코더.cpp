#include <iostream>
#include <string>

using namespace std;

/*
	���� ��ó: try-cat.ch
	URL : http://www.try-cat.ch/contest/view/exercise/27/%EC%9D%B8%EC%BD%94%EB%8D%94

	����:
	���ڿ��� ������ �������� ��ȯ�Ͽ� ����Ѵ�.
	���ĺ� ���ڿ��� �Է����� �־����� �� ������ ���� �������� ���ڵ��� ����ϴ� ���α׷��� �ۼ��϶�.

	����:
	Time Limit : 200ms, Memory Limit : 512kb

	���ڿ�(��, ���ڿ� ���̴� 20 �̸�)
	�Է�:
	AAABBGFFFF
	
	�� ���ĺ� �� ������ �ش� ���ĺ��� ���������� ����Ѵ�.
	���:
	3A2B1G4F
*/

int main()
{
	string input;
	cin >> input;

	int count = 0;
	char ch = input[0];
	for (string::const_iterator iter = input.begin(); iter != input.end(); ++iter)
	{
		++count;

		if ((iter +1) == input.end())
		{
			cout << count << ch;
		}
		else if ((*(iter +1)) != ch)
		{
			cout << count << ch;

			ch = *(iter +1);
			count = 0;
		}
	}

	return 0;
}
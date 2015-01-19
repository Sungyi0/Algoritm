#include <iostream>
#include <string>

using namespace std;

/*
	���� ��ó: try-cat.ch
	URL : http://www.try-cat.ch/contest/view/exercise/15/2%EB%93%B1

	����:
	������ �迭���� �ι�°�� ū ���ڸ� ����Ѵ�.
	������ �迭���� �ι�°�� ū ���ڸ� ����ϴ� ���α׷��� �ۼ��϶�.

	����:
	Time Limit : 200ms, Memory Limit : 512kb

	10�� �̸��� �ڿ����� �̷���� �迭
	�Է�:
	9 5 2 7 7 8
	
	�Էµ� �ڿ��� �迭 ������ �ι�°�� ū �ڿ����� ����Ѵ�. (�ι�°�� ū �ڿ����� ������ �����ϴ��� 1���� ����Ѵ�.)
	���:
	8
*/

const int MaxInputCount = 9;

int main()
{
	string input;
	getline(cin, input);

	int intInput[MaxInputCount] = {0,};

	// string���� �Է¹ް� ������ �����ڷ� int �迭�� parsing�մϴ�.
	{
		int cursor = 0;
		for (string::const_iterator iter = input.begin(); iter != input.end(); ++iter)
		{
			if ((*iter) == ' ' || (*iter) == '\t' || (*iter) == '\n')
			{
				++cursor;
				continue;
			}

			// intInput[iter] (������)<< 1;
			intInput[cursor] *= 10;
			intInput[cursor] += (*iter) - '0';
		}
	}

	int big = max(intInput[0], intInput[1]);
	int big2 = min(intInput[0], intInput[1]);

	for (int i = 2; i < MaxInputCount; ++i)
	{
		if (intInput[i] < 1)
			break;

		if (intInput[i] > big2)
		{
			if (intInput[i] > big)
			{
				big2 = big;
				big = intInput[i];
			}
			else
			{
				big2 = intInput[i];
			}
		}
	}

	cout << big2;

	return 0;
}
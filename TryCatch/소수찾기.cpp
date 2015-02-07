#include <iostream>

using namespace std;

/*
	���� ��ó: try-cat.ch
	URL : http://www.try-cat.ch/contest/view/exercise/7/%EC%86%8C%EC%88%98-%EC%B0%BE%EA%B8%B0

	����:
	�ش��ϴ� ��� �Ҽ��� ����϶�
	�Ҽ��� 1�� �ڱ� �ڽŸ��� ����� ������ ���̴�. 100������ �ڿ��� �� ��� �Ҽ��� ����Ͻÿ�

	����:
	Time Limit : 100ms, Memory Limit : 512kb

	�Է°� ����

	�Ҽ��� ������������ ����Ѵ�. �� ��°� ���̴� �������� �����ϰ�, ��°� 5�� ���� �ٹٲ��� �Ѵ�.
	���:
	2 3 5 7 11 
	13 17 19 23 29 
	31 37 41 43 47 
	53 59 61 67 71 
	73 79 83 89 97
*/

const int limitNumber = 100;		// 100������ �Ҽ��� �Ǻ��մϴ�.

int main()
{
	int outCount = 0;
	for (int i = 2; i <= limitNumber; ++i)
	{
		bool isContinue = false;
		for (int j = 2; j < i; ++j)
			if (i % j == 0)
				isContinue = true;

		if (isContinue)
			continue;

		// �Ҽ���!
		cout << i << ' ';
		if (++outCount %5 == 0)
			cout << endl;
	}

	return 0;
}
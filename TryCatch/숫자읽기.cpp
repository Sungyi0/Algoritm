#include <iostream>
#include <cmath>

using namespace std;

/*
	���� ��ó: try-cat.ch
	URL : http://www.try-cat.ch/contest/view/exercise/6/%EC%88%AB%EC%9E%90-%EC%9D%BD%EA%B8%B0

	����:
	�־��� ���ڸ� �ѱ۷� �о��
	���ڴ����� ���� �̼��� � ���̵��� ������� ���ڰ� �ѱ۷� ��µǴ� ���α׷��� ������� �Ѵ�.

	����:
	Time Limit : 100ms, Memory Limit : 512kb

	0���� 1�� ������ ����
	�Է�:
	1358 
	132742

	�Է¹��� ���ڸ� �ѱ۷� �о� ����Ѵ�.
	���:
	õ ��� ���� �� 
	�� �︸ ��õ ĥ�� ��� ��
*/

/*
	��	��	��	õ
	��	�ʸ�	�鸸	õ��
	��	�ʾ�	���	õ��
	��	����	����	õ��
*/

const char* magnitude[] = {"", "��", "��", "õ"};
const char* magnitude2[] = {"", "��", "��", "��"};
const char* num2kor[] = {"", "��", "��", "��", "��", "��", "��", "ĥ", "��", "��"};

// �ڸ��� ���ϱ�
int calc_numbercount (const int input)
{
	int numbercount = 0;
	for (int number = input; number > 0; number /= 10)
		++numbercount;

	return numbercount;
}

int main()
{
	int input;
	cin >> input;

	// �ڸ��� ���ϱ�
	int numbercount = calc_numbercount(input);

	// ��ƾ���� ���� �ϳ��� �д´�.
	int number = input;
	while (number > 0)
	{
		int readNumber = -1;

		// �պ��� �н��ϴ�.
		int ten = static_cast<int>(pow(10, numbercount-- -1));		// �����ڸ���
		readNumber = number / ten;
		number = number % ten;

		// �Ͻ�, �Ϲ�, ��õ���� ���� �����˴ϴ�.
		if (readNumber != 1 || numbercount % 4 == 0)
			cout << num2kor[readNumber];
		cout << magnitude[numbercount%4];

		if (numbercount%4 == 0)
			cout << magnitude2[numbercount/4];
		cout << ' ';

	}


	return 0;
}
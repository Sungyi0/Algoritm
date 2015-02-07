#include <iostream>
#include <cmath>

using namespace std;

/*
	���� ��ó: try-cat.ch
	URL : http://www.try-cat.ch/contest/view/exercise/11/%EC%99%84%EC%A0%84-%EC%A0%9C%EA%B3%B1-%EC%88%98

	����:
	���� �������� ã�ƺ���.
	�ϳ��� �ڿ����� �Է����� �־����� �� �� ���� ���� ����� (���� ���� ����) ���� �������� ã�� ����Ѵ�.

	����:
	Time Limit : 200ms, Memory Limit : 512kb

	1���� �ڿ���
	�Է�:
	75
	
	�Է°��� ���� ����� ����������
	���:
	81
*/

// ù°�ڸ��� �ݿø��ϴ� �Լ�.
// 0.5�� ���� �� �����ϴ� ����Դϴ�.
inline int myround(double number)
{
	return static_cast<int>(floor(number + 0.5));
}

int main()
{
	int input;
	cin >> input;

	double sqrtInput = sqrt(input);
	sqrtInput = myround(sqrtInput);

	cout << sqrtInput * sqrtInput;

	return 0;
}
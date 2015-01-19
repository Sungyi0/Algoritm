#include <iostream>

using namespace std;

/*
	���� ��ó: try-cat.ch
	URL : http://www.try-cat.ch/contest/view/exercise/8/%EC%82%BC%EA%B0%81%ED%98%95-%ED%8C%90%EB%B3%84

	����:
	�ﰢ���� ������ �Ǻ��϶�
	�ﰢ���� ������ ���̰� �־����� �����ﰢ������, �����ﰢ������, �а� �ﰢ�������� �Ǻ��Ͻÿ�

	����:
	Time Limit : 100ms, Memory Limit : 512kb

	�ﰢ�� �� ���� ���̸� ��Ÿ���� 3���� ���� ����(�̷���� �� ���� �ﰢ���� �־����� ����)
	�Է�:
	5 3 4
	
	�Է¹��� ���� ���̸� �м��Ͽ� ����, ����, �а� �� �ϳ����� �Ǻ��� �� ����Ѵ�.
	���:
	����
*/

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	// ���� �� ���� c�� �����մϴ�.
	if (a > b)
		swap(a, c);
	else if(b > c)
		swap(b, c);

	// ��Ÿ����� ������ �̿��ؼ� �ﰢ���� �Ǻ��մϴ�.
	int aabb = (a*a) + (b*b);
	int cc = c*c;

	if (aabb > cc)
		cout << "���� �ﰢ��!";
	else if(aabb < cc)
		cout << "�а� �ﰢ��!";
	else
		cout << "���� �ﰢ��!";

	return 0;
}
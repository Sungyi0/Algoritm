#include <iostream>

using namespace std;

/*
	���� ��ó: try-cat.ch
	URL : http://www.try-cat.ch/contest/view/exercise/24/%EC%98%A8%EB%8F%84-%EB%8B%A8%EC%9C%84-%EB%B3%80%ED%99%98

	����:
	ȭ���µ��� �����µ��� �ٲ��
	ȭ���µ� ������ F, �����µ� ������ C�� �Ѵ�. ȭ���µ��� �Է��Ͽ� �װ��� �����µ��� ��ȯ�ϴ� ���⸦ ���α׷����϶�. (��, ��ȯ ������ ������ ����. �����µ�(C) = (ȭ���µ�(F) - 30) / 2)

	����:
	Time Limit : 200ms, Memory Limit : 512kb

	������ �̷���� ȭ�� �µ�(���� F ����)
	�Է�:
	97F
	
	������ �̷���� ���� �µ�(���� C ����), �Ҽ��� ���ϴ� ��� ������.
	���:
	33C
*/

int main()
{
	int f;
	cin >> f;

	cout << (f - 30) / 2 << 'C';

	return 0;
}

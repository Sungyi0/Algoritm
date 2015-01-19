#include <iostream>
#include <string>

using namespace std;

/*
	���� ��ó: try-cat.ch
	URL : http://www.try-cat.ch/contest/view/exercise/14/%EA%B8%80%EC%9E%90-%EA%B0%9C%EC%88%98-%EC%84%B8%EA%B8%B0

	����:
	���ڿ����� �� �ܾ��� ���̸� ���Ѵ�.
	���ĺ�, ��ȣ, ���� �� Ư�����ڵ�� �̷���� ���ڿ��� �Է¹޴´�. �׸��� ���� ���ڷ� ���еǴ� �� �ܾ��� ���̸� ����Ѵ�.

	����:
	Time Limit : 200ms, Memory Limit : 512kb

	Ư������, ���ĺ�, ����, ���� ������ �̷���� ���ڿ�
	�Է�:
	Dark. Knight, Rises!
	
	���鹮�ڷ� ���еǴ� �� �ܾ��� ���̸� ���� ����Ѵ�.
	���:
	5 7 6
*/

int main()
{
	string input;
	getline(cin, input);

	int charCount = 0;
	for (string::const_iterator iter = input.begin(); iter != input.end(); ++iter)
	{
		if (*iter == ' ')
		{
			cout << charCount << ' ';
			charCount = 0;
			continue;
		}

		++charCount;

		if (iter == input.end() -1)
		{	
			cout << charCount;
			break;
		}
	}

	return 0;
}
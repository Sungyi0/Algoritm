#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
	���� ��ó: try-cat.ch
	URL : http://www.try-cat.ch/contest/view/exercise/30/%EC%A4%91%EB%B3%B5%EB%90%98%EB%8A%94-%EC%88%98-%EC%A0%9C%EA%B1%B0

	����:
	������ �迭 �� �ߺ��Ǵ� ���� �����϶�
	������ ������ �迭�� �Է��Ͽ��� �� �迭��� �� �ߺ��Ǵ� ��Ҹ� ������ �� ����϶�.

	����:
	Time Limit : 200ms, Memory Limit : 512kb

	������ ���� �迭�� �Էµǰ�, �� ������ ��ǥ(,)�� ���еȴ�.
	�Է�:
	1,3,2,4,2,4,4
	
	�ߺ��� ���� ���ŵ� ���� �迭�� ���ٸ� ���� ���� �Էµ� ������� �����
	���:
	1,3,2,4
*/

int main()
{
	string input;
	getline(cin, input);

	vector<int> arr(1);
	// string���� �Է¹ް� ��ǥ�� �����ڷ� parsing�մϴ�.
	{
		int cursor = 0;
		for (string::const_iterator iter = input.begin(); iter != input.end(); ++iter)
		{
			if ((*iter) == ',')
			{
				// �ߺ��Ǵ� ���� �����մϴ�.
				if (find(arr.begin(), arr.end() -1, arr[cursor]) != arr.end() -1)
				{
					arr[cursor] = 0;
				}
				else
				{
					++cursor;
					arr.push_back(0);
				}
				continue;
			}

			// intInput[iter] (������)<< 1;
			arr[cursor] *= 10;
			arr[cursor] += (*iter) - '0';
		}
	}

	for (vector<int>::const_iterator iter = arr.begin(); iter != arr.end(); ++iter)
		cout << (*iter) << ',';

	return 0;
}
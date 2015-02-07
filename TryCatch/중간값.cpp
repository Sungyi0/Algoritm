#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

/*
	���� ��ó: try-cat.ch
	URL : http://www.try-cat.ch/contest/view/exercise/18/%EC%A4%91%EA%B0%84%EA%B0%92

	����:
	�迭���� �߰���(median)�� ã�ƺ���
	���ĵ��� ���� ������ �������� �Է����� �־����� �� �߰����� ã�Ƽ� ����϶�. �߰����� �־��� �迭�� �����Ͽ��� �� ����� ��ġ�ϴ� ���� ���Ѵ�.

	����:
	Time Limit : 100ms, Memory Limit : 512kb

	ù��° �ٿ��� �迭�� ����(3 �� x �� 1023, x�� Ȧ��), �ι�° �ٿ��� ���� �ٸ� ������ ������� �̷���� �迭�� �Էµȴ�.
	�Է�:
	7 
	79 20 32 66 18 38 50
	
	�־��� �迭 ��� �߰����� ����Ѵ�.
	���:
	38
*/

int main()
{
	int arrCount = 0;
	cin >> arrCount;

	// �Է� ���� ����ġ
	if ((arrCount % 2 == 0) || (arrCount < 3 || arrCount > 1023))
	{
		cout << "�Է� ���� ����ġ" << endl;;
		return 0;
	}
	// clear the buffer (cin)
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	vector<int> arr(arrCount);

	string input;
	getline(cin, input);
	// string���� �Է¹ް� ������ �����ڷ� int �迭�� parsing�մϴ�.
	{
		int cursor = 0;
		for (string::const_iterator iter = input.begin(); iter != input.end(); ++iter)
		{
			// ������ �������Դϴ�.
			if ((*iter) == ' ' || (*iter) == '\t' || (*iter) == '\n')
			{
				//if (::find(arr.begin(), arr.begin() + cursor, arr[cursor]) != arr.end())
				//{
				//	cout << "�迭 ���� ���� �ߺ��Ǹ� �ȵ˴ϴ�." << endl;
				//	return 0;
				//}

				++cursor;
				continue;
			}

			// intInput[iter] (������)<< 1;
			arr[cursor] *= 10;
			arr[cursor] += (*iter) - '0';
		}
	}

	::sort(arr.begin(), arr.end());

	cout << arr[arr.size() / 2];

	return 0;
}
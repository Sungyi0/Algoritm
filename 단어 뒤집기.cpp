#include <iostream>
#include <string>

using namespace std;

/*
	���� ��ó: try-cat.ch
	URL : http://www.try-cat.ch/contest/view/exercise/21/%EB%8B%A8%EC%96%B4-%EB%92%A4%EC%A7%91%EA%B8%B0

	����:
	�ܾ���� ������ ����Ѵ�.
	���ڿ��� �Է¹޾� �ش� ���ڿ��� �ܾ���� ������ ����ϴ� ���α׷��� �ۼ��϶�

	����:
	Time Limit : 200ms, Memory Limit : 512kb

	������ ���ڿ��� �Է¹޴´�. �ܾ�� �ܾ� ���̴� ���� ���ڷ� ���еȴ�.
	�Է�:
	olleh dlrow
	
	���ڿ��� ���� �ܾ���� ���� ����� ����Ѵ�. ���ڿ����� �ܾ���� ������ ������ �ʴ´�.
	���:
	hello world
*/

//void reverseString(string::iterator begin, string::iterator end)
//{
//	while (begin != end)
//	{
//		swap((*begin), (*end));
//
//		++begin; --end;
//	}
//}

int main()
{
	//string input;
	//getline(cin, input);

	//// �������� �������� �����ϴ�..
	//if (input[input.size()] != ' ' && input[input.size()] != '\t' && input[input.size()] != '\n')
	//	input.push_back(' ');

	//{
	//	string::iterator begin = input.begin();
	//	for (string::iterator iter = input.begin(); iter != input.end(); ++iter)
	//	{
	//		// �����ڴ� ����
	//		if ((*iter) == ' ' || (*iter) == '\t' || (*iter) == '\n')
	//		{
	//			reverseString(begin, iter -1);
	//			begin = iter +1;
	//		}
	//	}
	//}

	//cout << input;

	string input;

	while (cin >> input)
	{
		string rever(input.rbegin(), input.rend());
		cout << rever << ' ';
	}

	return 0;
}
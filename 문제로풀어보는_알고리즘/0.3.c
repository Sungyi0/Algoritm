#include <stdlib.h>

/* 0.3 �迭 ȸ�� */
// Q. right_rotate() �Լ� �ۼ��ϱ�
void right_rotate(int arr[], int s, int t)
{
	int i, last;

	last = arr[t];
	for (i = t; i > s; --i)
		arr[i] = arr[i - 1];
	arr[s] = last;
}

// Q. left_rotate() �Լ� �ۼ��ϱ�
void left_rotate(int arr[], int s, int t)
{
	int i, start;

	start = arr[s];
	for (i = s; i < t; ++i)
		arr[i] = arr[i + 1];
	arr[t] = start;
}
/* �����غ���
	Q. k�� ���ڷ� �޾Ƽ� k��ŭ ���������� ȸ����Ű�� �Լ��� �ۼ��϶�. 
	k��ŭ ���������� ȸ���ϴ� ���� 1��ŭ ���������� ȸ���ϴ� ���� 
	k�� �ݺ��ϸ� ������ �� ����� ������. �� ������ ����� �򵵷� �ۼ��غ���. */
void right_rotate_k(int arr[], int s, int t, int k)
{
	int i;
	int size = t - s + 1;
	int realK = k % size;		// ���ʿ��� �̵��� ���ش�.
	int *arTemp = (int*)malloc(sizeof(int) * realK);

	// �ű� �ʿ䰡 ������ �׳� �����ϴ�.
	if (realK == 0)
		return;

	// arr�� �ں��� realK��ŭ ����մϴ�.
	for (i = 0; i < realK; ++i)
		arTemp[i] = arr[(size - realK) + i];

	for (i = t - realK; i >= s; --i)
		arr[i + realK] = arr[i];
	for (i = s; i < s + realK; ++i)
		arr[i] = arTemp[i - s];

	free(arTemp);
}
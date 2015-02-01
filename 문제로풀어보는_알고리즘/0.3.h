#pragma once

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
/* Q. k�� ���ڷ� �޾Ƽ� k��ŭ ���������� ȸ����Ű�� �Լ��� �ۼ��϶�. 
	k��ŭ ���������� ȸ���ϴ� ���� 1��ŭ ���������� ȸ���ϴ� ���� 
	k�� �ݺ��ϸ� ������ �� ����� ������. �� ������ ����� �򵵷� �ۼ��غ���. */